#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class JigsawBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>          mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>       mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>       mFinalBlock;
    ::ll::TypedStorage<8, 112, ::JigsawEditorData> mEditorData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawBlockInfo(::JigsawBlockInfo const&);

    MCNAPI std::string const& getPoolName() const;

    MCNAPI ~JigsawBlockInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JigsawBlockInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
