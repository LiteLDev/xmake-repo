#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ServerLevel;
class StructureAnimationData;
// clang-format on

class StructureAnimationAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<StructureAnimationData>> mStructureAnimationData;
    ::ll::TypedStorage<8, 96, ::StructureSettings>                    mStructureSettings;
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mLoadPosition;
    ::ll::TypedStorage<8, 24, std::string>                            mFullName;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureAnimationAction();

    virtual void execute(::ServerLevel&, ::Dimension&);

    virtual void serialize(::CompoundTag&);

    virtual bool operator==(::IRequestAction const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StructureAnimationAction(::StructureSettings const&, ::DimensionType const, ::BlockPos const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<StructureAnimationAction> load(::CompoundTag const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureSettings const&, ::DimensionType const, ::BlockPos const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);

    MCNAPI void $serialize(::CompoundTag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
