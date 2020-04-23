/*  =========================================================================
    restapi_helpers - Helpers

    Copyright (C) 2018 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef CERTGEN_RESTAPI_HELPERS_H_INCLUDED
#define CERTGEN_RESTAPI_HELPERS_H_INCLUDED

#include "fty_certificate_generator_rest_library.h"

#include <string>
#include <vector>

namespace restapi
{
    static constexpr char CLIENT_ID[]    = "fty-certificate-generator-rest";
    static constexpr char DESTINATION[]  = "fty-certificate-generator";
    static constexpr char END_POINT[]    = "ipc://@/malamute";

    //URL_PREFIX = /api/v1/admin/internal-certificate/
    static constexpr size_t URL_PREFIX_SIZE = 4;

    class Path
    {
    public:
        Path(const std::string & pathStr);

        const std::string & getPathStr() const;
        const std::string & getItem(size_t index) const;
        size_t getNumberOfItem() const;

    private:
        std::string m_pathStr;
        std::vector<std::string> m_items;
    };

} //namepace restapi

#endif
