#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_90/camera/CameraPreset.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
class IMinecraftEventing;
class LinkedAssetValidator;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace PuvLoadData { struct LoadResultWithTiming; }
#else // @header-generator platform
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraPresets {
public:
    // CameraPresets inner types declare
    // clang-format off
    struct CameraList;
    // clang-format on

    // CameraPresets inner types define
    struct CameraList {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>       mName;
        ::ll::TypedStorage<8, 24, std::vector<uint>> mPresetIndices;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>       mName;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> mPresetIndices;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CameraList& operator=(CameraList const&);
        CameraList();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~CameraList();
#else // @header-generator platform
        MCNAPI CameraList(::CameraPresets::CameraList const&);
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCNAPI void* $ctor(::CameraPresets::CameraList const&);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_90::CameraPreset>> mPresets;
    ::ll::TypedStorage<8, 24, std::vector<CameraPresets::CameraList>>           mLists;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_90::CameraPreset>> mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraPresets::CameraList>>           mLists;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraPresets& operator=(CameraPresets const&);
    CameraPresets(CameraPresets const&);
    CameraPresets();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> buildCameraPresetList() const;

    MCNAPI ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(ulong) const;

    MCNAPI std::optional<uint> getCameraPresetIndex(std::string const&) const;

    MCNAPI bool isEmpty() const;
#else // @header-generator platform
    MCNAPI void _storeCameraList(::CameraPresets::CameraList&& list);
#endif // @header-generator platform

    MCNAPI void loadPresets(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourcePackManager&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const,
        ::IMinecraftEventing&
#else // @header-generator platform
        ::ResourcePackManager&                             resourcePackManager,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::CameraPresets& operator=(::CameraPresets&&);

    MCNAPI ~CameraPresets();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isAllowedEaseTarget(std::string const&);
#else // @header-generator platform
    MCNAPI static bool isAllowedEaseTarget(::std::string const& easeTarget);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isVanillaCamera(std::string const&);
#else // @header-generator platform
    MCNAPI static bool isVanillaCamera(::std::string const& cameraName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
