#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineDefinition.h"
#else // @header-generator platform
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CameraSplinePacket;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class NetworkIdentifier;
class PacketSender;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Resources { template<::Bedrock::Resources::ResourceCategory T0> class SharedSlicesTraits; }
namespace Core { class Path; }
namespace SharedTypes::v1_26_0 { struct CameraSplineFile; }
#else // @header-generator platform
namespace SharedTypes::v1_26_0 { struct CameraSplineDefinition; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraSplineDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CameraSplineDataRegistryComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<
        Bedrock::Resources::SharedSlicesTraits<(Bedrock::Resources::ResourceCategory)5>>;
#else // @header-generator platform
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<::Bedrock::Resources::SharedSlicesTraits<5>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                      mEventing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                   mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                          mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineDataRegistryComponent& operator=(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraSplineDataRegistryComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CameraSplineDataRegistryComponent(::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI void loadResources(::ResourcePackManager const& resourcePackManager, ::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void sendRegistryToClient(::PacketSender& packetSender, ::NetworkIdentifier const& source);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
