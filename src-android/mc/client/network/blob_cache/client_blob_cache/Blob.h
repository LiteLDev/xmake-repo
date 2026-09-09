#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>        id;
    ::ll::TypedStorage<8, 24, std::string const> data;
    ::ll::TypedStorage<1, 1, bool const>         isChunkInTickRange;
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
