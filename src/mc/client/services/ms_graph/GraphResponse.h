#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph {

#if defined(LL_PLAT_A) // @header-generator platform
enum GraphResponse : uint {
    UnexpectedResponse  = 0,
    Continue            = 100,
    OK                  = 200,
    Created             = 201,
    Accepted            = 202,
    NoContent           = 204,
    BadRequest          = 400,
    Unauthorized        = 401,
    Forbidden           = 403,
    NotFound            = 404,
    MethodNotAllowed    = 405,
    Conflict            = 409,
    Gone                = 410,
    FileTooLarge        = 413,
    InternalServerError = 500,
    ServiceUnavailable  = 503,
    TimeOut             = 504,
    Storage             = 507,
};
#else // @header-generator platform
enum class GraphResponse : int {};
#endif // @header-generator platform

}
