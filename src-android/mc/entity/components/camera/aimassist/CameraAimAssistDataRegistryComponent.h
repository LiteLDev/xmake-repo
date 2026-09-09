#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"
#include "mc/deps/shared_types/v1_21_120/camera/CameraAimAssistPresetDefinition.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryDefinition.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class CameraAimAssistRegistryComponent;
class EntityContext;
class IMinecraftEventing;
class LinkedAssetValidator;
class NetworkIdentifier;
class PackInstance;
class PacketSender;
class ResourcePackManager;
struct CameraAimAssistDataRegistryDirtyComponent;
namespace Core { class Path; }
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraAimAssistDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, SharedTypes::v1_21_120::CameraAimAssistPresetDefinition>> mPresets;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<4, 40, std::mutex> mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryComponent& operator=(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent(CameraAimAssistDataRegistryComponent const&);
    CameraAimAssistDataRegistryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraAimAssistDataRegistryComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
