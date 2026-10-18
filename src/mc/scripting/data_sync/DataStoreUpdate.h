#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreUpdate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                             mDataStoreName;
    ::ll::TypedStorage<8, 24, std::string>                             mProperty;
    ::ll::TypedStorage<4, 4, uint>                                     mPropertyUpdateCount;
    ::ll::TypedStorage<4, 4, uint>                                     mPathUpdateCount;
    ::ll::TypedStorage<8, 24, std::string>                             mPath;
    ::ll::TypedStorage<8, 32, std::variant<double, bool, std::string>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                               mDataStoreName;
    ::ll::TypedStorage<8, 32, ::std::string>                               mProperty;
    ::ll::TypedStorage<4, 4, uint>                                         mPropertyUpdateCount;
    ::ll::TypedStorage<4, 4, uint>                                         mPathUpdateCount;
    ::ll::TypedStorage<8, 32, ::std::string>                               mPath;
    ::ll::TypedStorage<8, 40, ::std::variant<double, bool, ::std::string>> mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataStoreUpdate();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DataStoreUpdate(::Bedrock::DDUI::DataStoreUpdate const&);
#else // @header-generator platform
    MCAPI DataStoreUpdate(::Bedrock::DDUI::DataStoreUpdate const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreUpdate const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DataStoreUpdate();
#else // @header-generator platform
    MCAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate const&);

    MCAPI bool operator==(::Bedrock::DDUI::DataStoreUpdate const& rhs) const;

    MCAPI ~DataStoreUpdate();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::DDUI
