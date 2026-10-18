#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PackCapabilityTrustLevel.h"
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/LegacyPackIdVersion.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/resource/ResourceMetadata.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/DropdownSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/LabelSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/NativeModuleDependency.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SliderSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/ToggleSetting.h"
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/ManifestType.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/PackScope.h"
#include "mc/resources/TemplateLockState.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class I18n;
namespace Json { class Value; }
// clang-format on

class PackManifest : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PackManifest inner types define
    enum class PackRedownloadableState : int {
        Redownloadable    = 0,
        NotRedownloadable = 1,
        Unknown           = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::ManifestType> mManifestType;
    ::ll::TypedStorage<1, 1, ::ManifestOrigin> mManifestOrigin;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mPackIconLocation;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mSourceIdentity;
    ::ll::TypedStorage<4, 4, ::PackCategory> mPackCategory;
    ::ll::TypedStorage<1, 1, ::PackOrigin> mPackOrigin;
    ::ll::TypedStorage<1, 1, bool> mIsTitleLocked;
    ::ll::TypedStorage<1, 1, bool> mExpired;
    ::ll::TypedStorage<8, 8, ulong> mSize;
    ::ll::TypedStorage<8, 24, std::string> mLastModifiedDate;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mLanguageCodesForPackKeywords;
    ::ll::TypedStorage<1, 1, bool> mFailsGameVersionMatch;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat> mFormatVersion;
    ::ll::TypedStorage<1, 1, ::PackManifestFormat> mOriginalFormatVersion;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mDescription;
    ::ll::UntypedStorage<8, 48> mIdentity;
    ::ll::TypedStorage<1, 1, ::PackScope> mPackScope;
    ::ll::UntypedStorage<1, 1> mPackType;
    ::ll::UntypedStorage<8, 32> mRequiredBaseGameVersion;
    ::ll::UntypedStorage<8, 32> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::TemplateLockState> mTemplateOptionLockState;
    ::ll::TypedStorage<4, 4, ::PackManifest::PackRedownloadableState> mPackReDownloadableState;
    ::ll::TypedStorage<4, 4, ::PackCapabilityTrustLevel> mMaximumAllowedTrustLevel;
    ::ll::TypedStorage<1, 1, bool> mIsHidden;
    ::ll::TypedStorage<1, 1, bool> mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool> mIsRandomSeedAllowed;
    ::ll::TypedStorage<1, 1, bool> mHasClientScript;
    ::ll::TypedStorage<1, 1, bool> mHasEducationMetadata;
    ::ll::TypedStorage<1, 1, bool> mHasPlugins;
    ::ll::TypedStorage<1, 1, bool> mHasValidUUID;
    ::ll::TypedStorage<8, 24, std::vector<ResourceInformation>> mModules;
    ::ll::TypedStorage<8, 24, std::vector<LegacyPackIdVersion>> mLegacyModuleDependencies;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mPackDependencies;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency>> mNativeModuleDependencies;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::variant<SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting, SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting, SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting, SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>>> mPackSettingsDef;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackCapabilityTrustLevel>> mCapabilities;
    ::ll::TypedStorage<8, 120, ::ResourceMetadata> mMetadata;
    ::ll::UntypedStorage<8, 24> mOptimizationVersion;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifest& operator=(PackManifest const&);
    PackManifest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManifest();

    virtual std::unique_ptr<PackManifest> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackManifest(::ManifestType);

    MCNAPI PackManifest(::PackManifest const&);

    MCNAPI void _serializeDependencies(::Json::Value&) const;

    MCNAPI void _serializeHeader(::Json::Value&) const;

    MCNAPI void _serializeLegacyModuleDependencies(::Json::Value&) const;

    MCNAPI void _serializeMeta(::Json::Value&) const;

    MCNAPI void _serializeModules(::Json::Value&) const;

    MCNAPI void _serializeVersion(::Json::Value&, ::SemVersion const&) const;

    MCNAPI void addLegacyModuleDependency(::LegacyPackIdVersion const&);

    MCNAPI void addModule(::ResourceInformation const&);

    MCNAPI void addNativeModuleDependency(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const&);

    MCNAPI void addPackCapability(std::string_view, ::PackCapabilityTrustLevel);

    MCNAPI void addPackDependency(::PackIdVersion const&);

    MCNAPI bool canBeRedownloaded() const;

    MCNAPI void clearLegacyModuleDependencies();

    MCNAPI void clearModules();

    MCNAPI ::Core::PathBuffer<std::string> generateBaseIconPath() const;

    MCNAPI ::Core::PathBuffer<std::string> generateIconPath() const;

    MCNAPI ::ContentIdentity const& getContentIdentity() const;

    MCNAPI std::vector<PackIdVersion> const& getDependentPackIdentities() const;

    MCNAPI std::string getDescription(::I18n&) const;

    MCNAPI ::ResourceFileSystem getFileSystemFromOrigin() const;

    MCNAPI ::PackManifestFormat getFormatVersion() const;

    MCNAPI ::PackIdVersion const& getIdentity() const;

    MCNAPI std::vector<std::string> const& getLanguageCodesForPackKeywords() const;

    MCNAPI std::string const& getLastModifiedDate() const;

    MCNAPI std::vector<LegacyPackIdVersion> const& getLegacyModuleDependencies() const;

    MCNAPI ::ResourceLocation const& getLocation() const;

    MCNAPI ::ManifestOrigin getManifestOrigin() const;

    MCNAPI ::ManifestType getManifestType() const;

    MCNAPI ::ResourceMetadata const& getMetaData() const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI std::vector<ResourceInformation> const& getModules() const;

    MCNAPI std::string getName(::I18n&) const;

    MCNAPI std::string getNameForTelemetry(::I18n&) const;

    MCNAPI std::string getNameWithVersionForTelemetry(::I18n&) const;

    MCNAPI std::vector<SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency> const&
           getNativeModuleDependencies() const;

    MCNAPI ::SemVersion const& getOptimizationVersion() const;

    MCNAPI ::TemplateLockState getOptionLockedState() const;

    MCNAPI ::PackManifestFormat getOriginalFormatVersion() const;

    MCNAPI ::PackCategory getPackCategory() const;

    MCNAPI std::unordered_map<std::string, std::string> getPackNameLocalization(::I18n&) const;

    MCNAPI ::PackOrigin getPackOrigin() const;

    MCNAPI ::PackScope getPackScope() const;

    MCNAPI std::optional<std::vector<std::variant<
        SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
        SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
        SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
        SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>> const&
           getPackSettingsDef() const;

    MCNAPI std::optional<std::vector<std::string>> getPackSettingsLocKeys() const;

    MCNAPI ulong getPackSize() const;

    MCNAPI ::PackType getPackType() const;

    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCNAPI ::ContentIdentity const& getSourceIdentity() const;

    MCNAPI std::vector<std::string> getTrustedCapabilities() const;

    MCNAPI ::Core::PathBuffer<std::string> getZipFolderPath() const;

    MCNAPI bool hasClientScript() const;

    MCNAPI bool hasEducationMetadata() const;

    MCNAPI bool hasLegacyModuleDependencies() const;

    MCNAPI bool hasModule(::PackIdVersion const&) const;

    MCNAPI bool hasPackCapability(std::string_view) const;

    MCNAPI bool hasPlugins() const;

    MCNAPI bool hasValidUUID() const;

    MCNAPI bool isAddon() const;

    MCNAPI bool isBasePackCategory() const;

    MCNAPI bool isHidden() const;

    MCNAPI bool isPlatformLocked() const;

    MCNAPI bool isPremium() const;

    MCNAPI bool isRandomSeedAllowed() const;

    MCNAPI bool isRestrictedPack() const;

    MCNAPI bool isTitleLocked() const;

    MCNAPI bool isUsingPackDescriptionKeyword(::I18n&) const;

    MCNAPI bool isUsingPackNameKeyword(::I18n&) const;

    MCNAPI bool isValid() const;

    MCNAPI ::PackManifest& operator=(::PackManifest&&);

    MCNAPI void serialize(::PackManifestFormat, ::Json::Value&) const;

    MCNAPI void setCanBeRedownloaded(bool);

    MCNAPI void setContentIdentity(::ContentIdentity const&);

    MCNAPI void setDescription(std::string const&);

    MCNAPI void setExpired(bool);

    MCNAPI void setFormatVersion(::PackManifestFormat);

    MCNAPI void setHasClientScript();

    MCNAPI void setHasEducationMetadata(bool);

    MCNAPI void setHasPlugins(bool);

    MCNAPI void setHidden(bool);

    MCNAPI void setIdentity(::PackIdVersion const&);

    MCNAPI void setInvalidUUID();

    MCNAPI void setIsRandomSeedAllowed(bool);

    MCNAPI void setLanguageCodesForPackKeywords(std::vector<std::string>);

    MCNAPI void setLastModifiedDate(long);

    MCNAPI void setLocalizedNameKeywords(std::unordered_map<std::string, std::string> const&, ::I18n&);

    MCNAPI void setLocation(::ResourceLocation const&);

    MCNAPI void setManifestOrigin(::ManifestOrigin const&);

    MCNAPI void setMetadata(::ResourceMetadata const&);

    MCNAPI void setMinEngineVersion(::MinEngineVersion const&);

    MCNAPI void setName(std::string const&);

    MCNAPI void setOptimizationVersion(::SemVersion const&);

    MCNAPI void setOptionLockedState(::TemplateLockState);

    MCNAPI void setOriginalFormatVersion(::PackManifestFormat);

    MCNAPI void setPackCapabilitiesTrusted();

    MCNAPI void setPackCategory(::PackCategory);

    MCNAPI void setPackIconLocation(::ResourceLocation const&);

    MCNAPI void setPackOrigin(::PackOrigin);

    MCNAPI void setPackScope(::PackScope);

    MCNAPI void setPackSettingsDef(
        std::vector<std::variant<
            SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>
    );

    MCNAPI void setPackSize(ulong);

    MCNAPI void setPackType(::PackType);

    MCNAPI void setPlatformLocked(bool);

    MCNAPI void setRequiredBaseGameVersion(::BaseGameVersion const&);

    MCNAPI void setSourceIdentity(::ContentIdentity const&);

    MCNAPI void setTitleLocked(bool);

    MCNAPI bool supportsLocalizedSubpackNames() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackScope StringToPackScope(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& MarioPackId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ManifestType);

    MCNAPI void* $ctor(::PackManifest const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<PackManifest> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
