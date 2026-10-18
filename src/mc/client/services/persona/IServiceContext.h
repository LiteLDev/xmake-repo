#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class SearchQuery;
class SemVersion;
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class IServiceContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IServiceContext() = default;

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader() const = 0;

    virtual std::string getMessageSessionId() const = 0;

    virtual std::shared_ptr<CatalogBackend> getPersonaBackend() const = 0;

    virtual std::string const& getPlatformOverride() const = 0;

    virtual ::SemVersion getVersionOfKnownSkinPack(::mce::UUID const&) const = 0;

    virtual bool isAlwaysSyncOnSaveEnabled() const = 0;

    virtual bool isNetworkAvailable() const = 0;

    virtual bool isPersonaServiceEnabled() const = 0;

    virtual bool isSaveDelayDisabled() const = 0;

    virtual bool isServicesManagerValid() const = 0;

    virtual void searchCatalog(::SearchQuery const&, std::string const&, std::function<void (const std::vector<std::string>&)>) = 0;

    virtual void setPlatformOverride(std::string const&) = 0;

    virtual void updateCatalog() = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IServiceContext {};
#endif // @header-generator platform

} // namespace persona
