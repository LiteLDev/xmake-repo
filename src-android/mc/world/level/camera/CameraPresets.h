#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/v1_21_90/camera/CameraPreset.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Experiments;
class IMinecraftEventing;
class LinkedAssetValidator;
class ReadOnlyBinaryStream;
class ResourcePackManager;
namespace PuvLoadData { struct LoadResultWithTiming; }
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
        ::ll::TypedStorage<8, 24, std::string>       mName;
        ::ll::TypedStorage<8, 24, std::vector<uint>> mPresetIndices;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CameraList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_90::CameraPreset>> mPresets;
    ::ll::TypedStorage<8, 24, std::vector<CameraPresets::CameraList>>           mLists;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::string> buildCameraPresetList() const;

    MCNAPI ::SharedTypes::v1_21_90::CameraPreset const* getCameraPreset(ulong) const;

    MCNAPI std::optional<uint> getCameraPresetIndex(std::string const&) const;

    MCNAPI bool isEmpty() const;

    MCNAPI void loadPresets(
        ::ResourcePackManager&,
        ::Experiments const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const,
        ::IMinecraftEventing&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static bool isAllowedEaseTarget(std::string const&);

    MCNAPI static bool isVanillaCamera(std::string const&);
    // NOLINTEND
};
