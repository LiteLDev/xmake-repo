#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineDefinition.h"

// auto generated forward declare list
// clang-format off
class CameraSplinePacket;
class IMinecraftEventing;
class NetworkIdentifier;
class PacketSender;
class ResourcePackManager;
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
namespace Core { class Path; }
namespace SharedTypes::v1_26_0 { struct CameraSplineFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraSplineDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CameraSplineDataRegistryComponent inner types define
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<
        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)5>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                      mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineDataRegistryComponent& operator=(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraSplineDataRegistryComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraSplineDataRegistryComponent(::IMinecraftEventing&);

    MCNAPI void loadResources(::ResourcePackManager const&, ::cereal::ReflectionCtx&);

    MCNAPI void sendRegistryToClient(::PacketSender&, ::NetworkIdentifier const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&);
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
