#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ReflectionCtx.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace SharedTypes::v1_21_100 { struct CameraDocument; }
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace SharedTypes::v1_26_0 { struct CameraSplineFile; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
// clang-format on

namespace Bedrock::Resources {

class LoaderRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealCtx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 128> mUnk6a1cdf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LoaderRegistry& operator=(LoaderRegistry const&);
    LoaderRegistry(LoaderRegistry const&);
    LoaderRegistry();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LoaderRegistry() = default;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~LoaderRegistry() = default;
#else // LL_PLAT_C
    virtual ~LoaderRegistry();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_20_80::ParticleEffectData, SharedTypes::v1_20_80::ParticleEffectData> const& getParticleLoader() const = 0;
#else // @header-generator platform
    virtual ::Puv::
        Loader<::SharedTypes::v1_20_80::ParticleEffectData, ::SharedTypes::v1_20_80::ParticleEffectData> const&
        getParticleLoader() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_21_100::CameraDocument, SharedTypes::v1_21_100::CameraDocument> const& getCameraLoader() const = 0;
#else // @header-generator platform
    virtual ::Puv::Loader<::SharedTypes::v1_21_100::CameraDocument, ::SharedTypes::v1_21_100::CameraDocument> const&
    getCameraLoader() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_21_110::VoxelShapeDocument, SharedTypes::v1_21_110::VoxelShapeDocument> const& getVoxelShapeLoader() const = 0;
#else // @header-generator platform
    virtual ::Puv::
        Loader<::SharedTypes::v1_21_110::VoxelShapeDocument, ::SharedTypes::v1_21_110::VoxelShapeDocument> const&
        getVoxelShapeLoader() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_21_30::TradeTableData, SharedTypes::v1_21_30::TradeTableData> const& getTradeTableLoader() const = 0;
#else // @header-generator platform
    virtual ::Puv::Loader<::SharedTypes::v1_21_30::TradeTableData, ::SharedTypes::v1_21_30::TradeTableData> const&
    getTradeTableLoader() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_26_0::CameraSplineFile, SharedTypes::v1_26_0::CameraSplineFile> const& getCameraSplineLoader() const = 0;
#else // @header-generator platform
    virtual ::Puv::Loader<::SharedTypes::v1_26_0::CameraSplineFile, ::SharedTypes::v1_26_0::CameraSplineFile> const&
    getCameraSplineLoader() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Loader<SharedTypes::v1_26_30::ItemDocument, SharedTypes::v1_26_30::ItemDocument> const& getItemLoader() const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Puv::Loader<::SharedTypes::v1_26_30::ItemDocument, ::SharedTypes::v1_26_30::ItemDocument> const&
    getItemLoader() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
