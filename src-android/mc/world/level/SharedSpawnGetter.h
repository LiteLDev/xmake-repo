#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/ISharedSpawnGetter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelData;
// clang-format on

class SharedSpawnGetter : public ::ISharedSpawnGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedSpawnGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedSpawnGetter();

    virtual ::BlockPos const& getSharedSpawnPosition() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SharedSpawnGetter(::gsl::not_null<Bedrock::NonOwnerPointer<const LevelData>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const LevelData>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos const& $getSharedSpawnPosition() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
