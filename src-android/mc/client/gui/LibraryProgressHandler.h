#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
