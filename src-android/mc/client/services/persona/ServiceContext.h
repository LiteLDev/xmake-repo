#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/IServiceContext.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class ContentCatalogService;
class ISkinRepository;
class SearchQuery;
class SemVersion;
namespace mce { class UUID; }
// clang-format on

namespace persona {

class ServiceContext : public ::persona::IServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ISkinRepository>>        mSkinRepository;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>> mCatalogService;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServiceContext();

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader() const;

    virtual std::string getMessageSessionId() const;

    virtual std::shared_ptr<CatalogBackend> getPersonaBackend() const;

    virtual std::string const& getPlatformOverride() const;

    virtual ::SemVersion getVersionOfKnownSkinPack(::mce::UUID const&) const;

    virtual bool isAlwaysSyncOnSaveEnabled() const;

    virtual bool isNetworkAvailable() const;

    virtual bool isPersonaServiceEnabled() const;

    virtual bool isSaveDelayDisabled() const;

    virtual bool isServicesManagerValid() const;

    virtual void searchCatalog(::SearchQuery const&, std::string const&, std::function<void (const std::vector<std::string>&)>);

    virtual void setPlatformOverride(std::string const&);

    virtual void updateCatalog();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthorizationHeader() const;

    MCNAPI std::string $getMessageSessionId() const;

    MCNAPI std::shared_ptr<CatalogBackend> $getPersonaBackend() const;

    MCNAPI std::string const& $getPlatformOverride() const;

    MCNAPI ::SemVersion $getVersionOfKnownSkinPack(::mce::UUID const&) const;

    MCNAPI bool $isAlwaysSyncOnSaveEnabled() const;

    MCNAPI bool $isNetworkAvailable() const;

    MCNAPI bool $isPersonaServiceEnabled() const;

    MCNAPI bool $isSaveDelayDisabled() const;

    MCNAPI bool $isServicesManagerValid() const;

    MCNAPI void
    $searchCatalog(::SearchQuery const&, std::string const&, std::function<void(const std::vector<std::string>&)>);

    MCNAPI void $setPlatformOverride(std::string const&);

    MCNAPI void $updateCatalog();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
