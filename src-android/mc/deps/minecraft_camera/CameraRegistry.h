#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/camera/minecraft_camera/RegisteredCamera.h"
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"

// auto generated forward declare list
// clang-format off
class CameraPresets;
class EcsEventDispatcher;
class EntityContext;
class EntityRegistry;
class Experiments;
class IMinecraftEventing;
class ResourcePackManager;
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
namespace SharedTypes::v1_21_100 { struct CameraDefinitions; }
namespace SharedTypes::v1_21_90 { struct CameraPreset; }
// clang-format on

class CameraRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CameraRegistry inner types define
    using CameraLoader = ::Bedrock::Resources::CategoryLoader<
        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)2>>;

    using RegisteredCamera = ::MinecraftCamera::RegisteredCamera;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 120> mReflectionCtx;
    ::ll::UntypedStorage<8, 256> mLoader;
    ::ll::TypedStorage<8, 24, std::vector<void (*)(EntityContext&, const SharedTypes::v1_21_100::CameraDefinitions&)>> mComponentInitializers;
    ::ll::TypedStorage<8, 24, std::vector<MinecraftCamera::RegisteredCamera>> mCameras;
    ::ll::UntypedStorage<8, 24> mCameraEntities;
    ::ll::UntypedStorage<1, 32> mGameCamera;
    ::ll::UntypedStorage<1, 40> mDebugCamera;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraRegistry();

    MCNAPI void createEntities(::EntityRegistry&, ::EcsEventDispatcher&);

    MCNAPI void loadFrom(::ResourcePackManager const&, ::IMinecraftEventing&);

    MCNAPI void registerCameraDefinitionFilename(std::string_view);

    MCNAPI void setupPresets(::EntityRegistry&, ::CameraPresets const&, ::Experiments const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _applyPresetValues(
        ulong,
        ::OwnerPtr<EntityId>&,
        ::SharedTypes::v1_21_90::CameraPreset const&,
        ::Experiments const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
