#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class EmoticonManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          mListFilename;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mStringToEmoticonMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoticonManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoticonManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EmoticonManager(std::string const&);

    MCNAPI std::string emoticonifyText(std::string const&) const;

    MCNAPI void emoticonifyTextInPlace(std::string&) const;

    MCNAPI void resetEmoticonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class EmoticonManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mListFilename;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mStringToEmoticonMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoticonManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoticonManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EmoticonManager(::std::string const& listFilename);

    MCAPI ::std::string emoticonifyText(::std::string const& text) const;

    MCAPI void emoticonifyTextInPlace(::std::string& text) const;

    MCAPI void resetEmoticonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& listFilename);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class EmoticonManager {};
#endif // @header-generator platform
#endif // @header-generator platform
