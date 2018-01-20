/*
    Copyright (c) 2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#ifndef _DIPLODOCUSDB_PHYSICALSTORAGE_PAGEREPOSITORY_PAGEFILEREPOSITORY_H_
#define _DIPLODOCUSDB_PHYSICALSTORAGE_PAGEREPOSITORY_PAGEFILEREPOSITORY_H_

#include "PageRepository.h"
#include "Page.h"
#include "PageCache.h"
#include "Ishiko/Errors/Error.h"
#include <boost/filesystem/path.hpp>
#include <fstream>

namespace DiplodocusDB
{

class PageFileRepository : public PageRepository
{
public:
    PageFileRepository();
    ~PageFileRepository() override;

    void create(const boost::filesystem::path& path, Ishiko::Error& error);
    void open(const boost::filesystem::path& path, Ishiko::Error& error);
    void close();

    size_t pageCount() override;
    Page* allocatePage(Ishiko::Error& error) override;
    Page* page(size_t i, Ishiko::Error& error) override;

    PageRepositoryWriter insert(size_t startPage, size_t offset, Ishiko::Error& error) override;
    void replace() override;
    void erase() override;

    std::fstream& file();

private:
    std::fstream m_file;
    size_t m_pageCount;
    PageCache m_pageCache;
};

}

#include "linkoptions.h"

#endif
