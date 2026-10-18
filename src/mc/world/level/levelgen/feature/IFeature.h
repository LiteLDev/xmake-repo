#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/FeaturePlacementFailureLogProxy.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockDescriptor;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
class SemVersion;
// clang-format on

class IFeature {
public:
    // IFeature inner types declare
    // clang-format off
    struct PlacementContext;
    // clang-format on

    // IFeature inner types define
    struct PlacementContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>              mTarget;
        ::ll::TypedStorage<4, 12, ::BlockPos>                       mPos;
        ::ll::TypedStorage<8, 8, ::Random&>                         mRandom;
        ::ll::TypedStorage<8, 8, ::RenderParams&>                   mRenderParams;
        ::ll::TypedStorage<8, 8, ::FeaturePlacementFailureLogProxy> mLogger;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacementContext& operator=(PlacementContext const&);
        PlacementContext(PlacementContext const&);
        PlacementContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mInternal;
    ::ll::TypedStorage<1, 1, bool> mCanUseInternalFeature;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IFeature();
#else // @header-generator platform
    virtual ~IFeature() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidPlacement(std::string const&);
#else // @header-generator platform
    virtual bool isValidPlacement(::std::string const& pass);
#endif // @header-generator platform

    virtual void upgradeFormat(::SemVersion const&);
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isAllowedToPlaceFeature(::IFeature const&) const;

    MCNAPI bool isInternal() const;

    MCNAPI bool operator==(::IFeature const&) const;

    MCNAPI bool setBlockSafe(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&, int) const;

    MCNAPI bool setBlockSafeSimple(::IBlockWorldGenAPI&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void setCanUseInternalFeature(bool);

    MCNAPI void setIsInternal(bool);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isExposedTo(::IBlockWorldGenAPI const&, ::BlockPos const&, ::BlockDescriptor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DEFAULT_NOT_SUPPORTED_PASS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool
    isExposedTo(::IBlockWorldGenAPI const& target, ::BlockPos const& candidatePos, ::BlockDescriptor const& exposedTo);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidPlacement(std::string const&);
#else // @header-generator platform
    MCAPI bool $isValidPlacement(::std::string const& pass);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $upgradeFormat(::SemVersion const&);
#else // @header-generator platform
    MCFOLD void $upgradeFormat(::SemVersion const&);


#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::IFeature const *>();
// clang-format on
#endif // @header-generator platform
