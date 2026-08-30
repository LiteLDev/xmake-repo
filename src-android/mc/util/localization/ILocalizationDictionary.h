#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

class ILocalizationDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>            mLocFilePath;
    ::ll::TypedStorage<8, 8, ulong>        mLocFilePathHash;
    ::ll::TypedStorage<8, 24, std::string> mLocCode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalizationDictionary();

    virtual std::string getLocString(std::string const&) const = 0;

    virtual bool isLocalizationReady() const = 0;

    virtual void _updateLoc() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _updateLocPath(::Core::Path const&);

    MCNAPI void updateLoc();
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
