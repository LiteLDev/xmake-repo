#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IMapDataManagerOptions.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelData;
// clang-format on

class MapDataManagerOptions : public ::IMapDataManagerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManagerOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapDataManagerOptions();

    virtual bool isPremiumWorldTemplate() const;

    virtual bool isLegacyLevel() const;

    virtual bool hasMapsCenteredToOrigin() const;

    virtual ::BlockPos const& getWorldCenter() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MapDataManagerOptions(::gsl::not_null<Bedrock::NonOwnerPointer<const LevelData>>);
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
    MCNAPI bool $isPremiumWorldTemplate() const;

    MCNAPI bool $isLegacyLevel() const;

    MCNAPI bool $hasMapsCenteredToOrigin() const;

    MCNAPI ::BlockPos const& $getWorldCenter() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
