#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/DefaultSkinType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class Pack;
class ResourceLocation;
class ResourcePackManager;
class SemVersion;
class SerializedSkinRef;
class Skin;
class SkinHandle;
class SkinPack;
class TaskGroup;
struct SkinPackMeta;
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace mce { class UUID; }
// clang-format on

class ISkinRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISkinRepository() = default;

    virtual void update(::ResourcePackManager&) = 0;

    virtual void flushResourceLoaderTasks() = 0;

    virtual void addLoadListener(std::weak_ptr<bool>, std::function<void(const mce::UUID&)>) = 0;

    virtual bool importSkinPack(::gsl::not_null<std::shared_ptr<Pack>>, bool) = 0;

    virtual bool loadCustomSkin(std::string const&, ::SharedTypes::persona::ArmSizeType) = 0;

    virtual bool tryLoadSkinPack(::mce::UUID const&, bool) = 0;

    virtual bool loadSkinPack(::mce::UUID const&) = 0;

    virtual void loadSkinPackAsync(::mce::UUID const&, ::SkinPackMeta const&) = 0;

    virtual void unloadAndDeleteSkinPack(::mce::UUID const&) = 0;

    virtual void cancelPendingLoads() = 0;

    virtual std::vector<const Pack*> const getKnownSkinPacks() const = 0;

    virtual std::vector<const Pack*> const getKnownSkinPacksInPackage() const = 0;

    virtual std::vector<const Pack*> const getKnownSkinPacksInUserDir() const = 0;

    virtual std::vector<const Pack*> const getKnownSkinPacksInPremiumDir() const = 0;

    virtual void forEachPack(std::function<void(const Pack&)> const&) const = 0;

    virtual void forEachLoadedSkinPack(std::function<void(const SkinPack&)> const&) const = 0;

    virtual ::SkinPack* getSkinPackById(::mce::UUID const&) const = 0;

    virtual ::SkinPack* getSkinPackByIdHash(ulong) const = 0;

    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const&) const = 0;

    virtual bool isSkinPackKnown(::mce::UUID const&) const = 0;

    virtual bool isSkinPackLoaded(::mce::UUID const&) const = 0;

    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const&) const = 0;

    virtual bool isSkinPackLoading(::mce::UUID const&) const = 0;

    virtual bool isSkinPackOwned(::ContentIdentity const&) const = 0;

    virtual ::Skin const* getSkinBySerializableName(std::string const&) const = 0;

    virtual ::Skin const* getSkin(::SkinHandle const&) const = 0;

    virtual bool canUseSkin(::SkinHandle const&) const = 0;

    virtual bool canUseSkin(::Skin const*) const = 0;

    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> storeCustomSkin(::ResourceLocation const&) = 0;

    virtual ::SkinHandle addCustomSkin(::SerializedSkinRef const&, ::ResourceLocation const&) = 0;

    virtual ::SkinHandle addCustomSkin(::persona::DefaultSkinType, ::ResourceLocation const&) = 0;

    virtual ::SkinHandle addCustomSkin(::SkinHandle const&) = 0;

    virtual bool canPickSkin() const = 0;

    virtual void pickSkin(std::function<void(bool, std::string)>) = 0;

    virtual void reloadSkinPackLocText() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getSkinKeyProvider() const = 0;

    virtual ::Skin const* getDefaultSkinBySerializableName(std::string const&) const = 0;

    virtual bool isValidSkin(::ResourceLocation const&) const = 0;

    virtual void loadSkin(::ResourceLocation const&) = 0;

    virtual void unloadSkin(::ResourceLocation const&) = 0;

    virtual bool loadCustomSkinTexture(::ResourceLocation const&) = 0;

    virtual void beginAsyncInit(::TaskGroup&) = 0;

    virtual bool isInitialized() const = 0;

    virtual ulong getLoadedSkinPackCount() const = 0;

    virtual ulong getLoadingSkinPackCount() const = 0;

    virtual ulong getUnloadedSkinPackCount() const = 0;

    virtual void deleteUnreferencedCustomSkinFiles(std::vector<SkinHandle> const&) = 0;

    virtual ::Core::PathBuffer<std::string> getCustomSkinDirectoryPath() const = 0;

    virtual std::optional<Core::PathBuffer<std::string>> getLegacyCustomSkinDirectoryPath() const = 0;

    virtual bool migrateCustomSkinFileFromLegacy(::Core::PathView) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISkinRepository {};
#endif // @header-generator platform
