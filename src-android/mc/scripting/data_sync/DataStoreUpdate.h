#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             mDataStoreName;
    ::ll::TypedStorage<8, 24, std::string>                             mProperty;
    ::ll::TypedStorage<4, 4, uint>                                     mPropertyUpdateCount;
    ::ll::TypedStorage<4, 4, uint>                                     mPathUpdateCount;
    ::ll::TypedStorage<8, 24, std::string>                             mPath;
    ::ll::TypedStorage<8, 32, std::variant<double, bool, std::string>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreUpdate(::Bedrock::DDUI::DataStoreUpdate const&);

    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreUpdate const&) const;

    MCNAPI ~DataStoreUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
