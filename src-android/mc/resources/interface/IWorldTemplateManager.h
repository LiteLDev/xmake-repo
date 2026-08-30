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
    // clang-format off
    virtual ~IWorldTemplateManager() = default;

    virtual void flushResourceLoaderTasks() = 0;

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplateByUUID(std::vector<mce::UUID> const&) const = 0;

    virtual ::Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void (const std::pair<std::string, bool>&)>) = 0;

    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const = 0;

    virtual void populateWorldTemplates() = 0;

    virtual ulong getWorldTemplateSize() const = 0;

    virtual ::WorldTemplateInfo const& getWorldTemplateAtIndex(int) const = 0;

    virtual bool isWorldTemplateInstalled(::mce::UUID const&) const = 0;

    virtual void deleteWorldTemplateAndFiles(::PackIdVersion const&) = 0;

    virtual ::WorldTemplateInfo const* findInstalledWorldTemplate(::PackIdVersion const&) const = 0;

    virtual ::WorldTemplateCollectionView createView(::mce::UUID const&) const = 0;

    virtual void forEachWorldTemplate(std::function<void (const WorldTemplateInfo&)> const&) const = 0;

    virtual bool isInitialized() const = 0;
    // clang-format on
    // NOLINTEND
};
