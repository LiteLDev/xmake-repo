#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace Bedrock::DDUI {

struct DataStoreChange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mDataStoreName;
    ::ll::TypedStorage<8, 24, std::string>            mProperty;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>          mDataStoreName;
    ::ll::TypedStorage<8, 32, ::std::string>          mProperty;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                    mUpdateCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mNewData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mNewData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataStoreChange& operator=(DataStoreChange const&);
    DataStoreChange();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DataStoreChange(::Bedrock::DDUI::DataStoreChange const&);
#else // @header-generator platform
    MCAPI DataStoreChange(::Bedrock::DDUI::DataStoreChange&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreChange const&) const;
#else // @header-generator platform
    MCAPI DataStoreChange(::Bedrock::DDUI::DataStoreChange const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DataStoreChange();
#else // @header-generator platform
    MCAPI ::Bedrock::DDUI::DataStoreChange& operator=(::Bedrock::DDUI::DataStoreChange&&);

    MCAPI bool operator==(::Bedrock::DDUI::DataStoreChange const& rhs) const;

    MCAPI ~DataStoreChange();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreChange const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreChange&&);

    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreChange const&);
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
