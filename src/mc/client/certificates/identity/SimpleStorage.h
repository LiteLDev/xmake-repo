#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/ISettingStorageStrategy.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
namespace Json { class Value; }
namespace Social { class ISecureStorageProvider; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Identity::Strategies {

#if defined(LL_PLAT_A) // @header-generator platform
class SimpleStorage : public ::Identity::ISettingStorageStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OptionRegistry*>                               mOptions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::ISecureStorageProvider>> mStorageProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleStorage();

    virtual ::Json::Value clientConfig() const;

    virtual void hasDemoSignedInEver(bool) const;

    virtual bool hasDemoSignedInEver() const;

    virtual void hasSignedInEver(bool) const;

    virtual bool hasSignedInEver() const;

    virtual long maxSignInExpiration() const;

    virtual long maxGraphExpiration() const;

    virtual void rememberMe(bool) const;

    virtual bool rememberMe() const;

    virtual void signedIn(bool) const;

    virtual bool signedIn() const;

    virtual long tokenRefreshThreshold() const;

    virtual void userHint(std::string const&) const;

    virtual std::string userHint() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimpleStorage(::OptionRegistry&, std::unique_ptr<Social::ISecureStorageProvider>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OptionRegistry&, std::unique_ptr<Social::ISecureStorageProvider>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $clientConfig() const;

    MCNAPI void $hasDemoSignedInEver(bool) const;

    MCNAPI bool $hasDemoSignedInEver() const;

    MCNAPI void $hasSignedInEver(bool) const;

    MCNAPI bool $hasSignedInEver() const;

    MCNAPI long $maxSignInExpiration() const;

    MCNAPI long $maxGraphExpiration() const;

    MCNAPI void $rememberMe(bool) const;

    MCNAPI bool $rememberMe() const;

    MCNAPI void $signedIn(bool) const;

    MCNAPI bool $signedIn() const;

    MCNAPI long $tokenRefreshThreshold() const;

    MCNAPI void $userHint(std::string const&) const;

    MCNAPI std::string $userHint() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SimpleStorage {};
#endif // @header-generator platform

} // namespace Identity::Strategies
