#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/StoreProgressHandler.h"

class LibraryProgressHandler : public ::StoreProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryProgressHandler();

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual std::string getName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryProgressHandler(
        std::string,
        std::function<void(bool&)>,
        std::function<void()>,
        std::vector<std::pair<std::string, std::string>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string,
        std::function<void(bool&)>,
        std::function<void()>,
        std::vector<std::pair<std::string, std::string>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/StoreProgressHandler.h"

class LibraryProgressHandler : public ::StoreProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryProgressHandler() /*override*/ = default;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& container) const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryProgressHandler(
        ::std::string                                            title,
        ::std::function<void(bool&)>                             tickCallback,
        ::std::function<void()>                                  cancelCallback,
        ::std::vector<::std::pair<::std::string, ::std::string>> properties
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                            title,
        ::std::function<void(bool&)>                             tickCallback,
        ::std::function<void()>                                  cancelCallback,
        ::std::vector<::std::pair<::std::string, ::std::string>> properties
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& container) const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
};
#else // @header-generator platform
class LibraryProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
