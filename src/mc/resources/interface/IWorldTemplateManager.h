#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
struct PackIdVersion;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IWorldTemplateManager() = default;
#else // @header-generator platform
    virtual ~IWorldTemplateManager() /*override*/ = default;
#endif // @header-generator platform

    virtual void flushResourceLoaderTasks() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const = 0;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(::std::vector<::mce::UUID> const& packUUIDs) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void (const std::pair<std::string, bool>&)>) = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    registerModifiedCallback(::std::function<void(::std::pair<::std::string, bool> const&)> newCallbackFunction) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const = 0;
#endif // @header-generator platform

    virtual void populateWorldTemplates() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getWorldTemplateSize() const = 0;
#else // @header-generator platform
    virtual uint64 getWorldTemplateSize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const = 0;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int index) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWorldTemplateInstalled(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual bool isWorldTemplateInstalled(::mce::UUID const& uuid) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&) = 0;
#else // @header-generator platform
    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const& packIdentity) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const = 0;
#else // @header-generator platform
    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const& packIdentityToFind) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const = 0;
#else // @header-generator platform
    virtual ::WorldTemplateCollectionView createView(::mce::UUID const& toView) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachWorldTemplate(std::function<void (const WorldTemplateInfo&)> const&) const = 0;
#else // @header-generator platform
    virtual void forEachWorldTemplate(::std::function<void(::WorldTemplateInfo const&)> const& callback) const = 0;
#endif // @header-generator platform

    virtual bool isInitialized() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
