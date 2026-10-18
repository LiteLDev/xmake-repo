#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureAnimationData.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<StructureAnimationData>> mStructureAnimationData;
    ::ll::TypedStorage<8, 96, ::StructureSettings>                    mStructureSettings;
    ::ll::TypedStorage<4, 4, ::DimensionType>                         mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mLoadPosition;
    ::ll::TypedStorage<8, 24, std::string>                            mFullName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureAnimationData>> mStructureAnimationData;
    ::ll::TypedStorage<8, 104, ::StructureSettings>                       mStructureSettings;
    ::ll::TypedStorage<4, 4, ::DimensionType>                             mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mLoadPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                              mFullName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructureAnimationAction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureAnimationAction();
#else // @header-generator platform
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    virtual bool operator==(::IRequestAction const& action) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&);

    virtual bool operator==(::IRequestAction const&) const;
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    StructureAnimationAction(::StructureSettings const&, ::DimensionType const, ::BlockPos const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<StructureAnimationAction> load(::CompoundTag const&, std::string const&);
#else // @header-generator platform
    MCAPI StructureAnimationAction(
        ::StructureSettings const& structureSettings,
        ::DimensionType            dimensionType,
        ::BlockPos const&          loadPosition,
        ::std::string const&       fullName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StructureSettings const&, ::DimensionType const, ::BlockPos const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::StructureSettings const& structureSettings,
        ::DimensionType            dimensionType,
        ::BlockPos const&          loadPosition,
        ::std::string const&       fullName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&);
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
