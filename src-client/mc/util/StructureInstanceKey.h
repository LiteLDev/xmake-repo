#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkKeyUtil {

struct StructureInstanceKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk6a68c9;
    ::ll::UntypedStorage<4, 4> mUnkeeae5a;
    ::ll::UntypedStorage<1, 1> mUnk62abe7;
    ::ll::UntypedStorage<8, 8> mUnk1a9a26;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureInstanceKey& operator=(StructureInstanceKey const&);
    StructureInstanceKey(StructureInstanceKey const&);
    StructureInstanceKey();
};

} // namespace ChunkKeyUtil
