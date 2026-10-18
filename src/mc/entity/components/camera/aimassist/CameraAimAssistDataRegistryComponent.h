#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetDefinition.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryDefinition.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class CameraAimAssistRegistryComponent;
class EntityContext;
class IMinecraftEventing;
class LinkedAssetValidator;
class NetworkIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
class PackInstance;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
class ResourcePackManager;
struct CameraAimAssistDataRegistryDirtyComponent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
#else // @header-generator platform
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraAimAssistDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>> mPresets;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<4, 40, std::mutex> mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>>
        mPresets;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::HashedString, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>>
                                                           mCategories;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>        mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryComponent& operator=(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CameraAimAssistDataRegistryComponent();
#else // @header-generator platform
    MCAPI explicit CameraAimAssistDataRegistryComponent(::IMinecraftEventing& eventing);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&
    addCategory(::EntityContext& levelEntity, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&& category);

    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&
    addPreset(::EntityContext& levelEntity, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&& preset);

    MCAPI void loadJsonFilesForServer(
        ::EntityContext&                                   levelEntity,
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager const&                       resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::CameraAimAssistPresetsPacket makePresetsPacketFromFullRegistry() const;

    MCAPI ::CameraAimAssistPresetsPacket makeUpdatePresetsPacketFromDirtyRegistry(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent
    ) const;

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const*
    tryGetCategory(::HashedString const& id) const;

    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* tryGetPreset(::HashedString const& id) const;

    MCAPI void updateServerAndSendRegistryToClient(
        ::PacketSender&                     packetSender,
        ::CameraAimAssistRegistryComponent& aimAssistRegistry,
        ::NetworkIdentifier const&          source
    );

    MCAPI void updateServerAndSynchronizeWithClients(
        ::CameraAimAssistDataRegistryDirtyComponent const& registryDirtyComponent,
        ::CameraAimAssistRegistryComponent&                aimAssistRegistry,
        ::PacketSender&                                    packetSender
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CameraAimAssistDataRegistryComponent(::IMinecraftEventing&);

    MCNAPI bool _validatePresetCategorySetting(std::string const&) const;

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&
    addCategory(::EntityContext&, ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const&
    addPreset(::EntityContext&, ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition&&);

    MCNAPI std::unordered_map<HashedString, SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition> const&
           getCategories() const;

    MCNAPI std::unordered_map<HashedString, SharedTypes::v1_21_120::CameraAimAssistPresetDefinition> const&
           getPresets() const;

    MCNAPI void loadJsonFilesForServer(
        ::EntityContext&,
        ::cereal::ReflectionCtx const&,
        ::ResourcePackManager const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const
    );

    MCNAPI ::CameraAimAssistPresetsPacket makePresetsPacketFromFullRegistry() const;

    MCNAPI ::CameraAimAssistPresetsPacket
    makeUpdatePresetsPacketFromDirtyRegistry(::CameraAimAssistDataRegistryDirtyComponent const&) const;

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const*
    tryGetCategory(::HashedString const&) const;

    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* tryGetPreset(::HashedString const&) const;

    MCNAPI void updateServerAndSendRegistryToClient(
        ::PacketSender&,
        ::CameraAimAssistRegistryComponent&,
        ::NetworkIdentifier const&
    );

    MCNAPI void updateServerAndSynchronizeWithClients(
        ::CameraAimAssistDataRegistryDirtyComponent const&,
        ::CameraAimAssistRegistryComponent&,
        ::PacketSender&
    );
#else // @header-generator platform
    MCAPI static bool _validatePresetCategorySetting(::std::string const& categoryId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::IMinecraftEventing& eventing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
