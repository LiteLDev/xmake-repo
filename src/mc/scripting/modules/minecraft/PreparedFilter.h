#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CaseInsensitiveCompare.h"
#include "mc/util/CaseInsensitiveHash.h"

namespace ScriptModuleMinecraft::ScriptSoundDefinitionRegistryInternal {

struct PreparedFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<float>> mMinDuration;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMaxDuration;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_set<std::string, Util::CaseInsensitiveHash, Util::CaseInsensitiveCompare, std::allocator<std::string>>>> mGenres;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_set<std::string, Util::CaseInsensitiveHash, Util::CaseInsensitiveCompare, std::allocator<std::string>>>> mMoods;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_set<std::string, Util::CaseInsensitiveHash, Util::CaseInsensitiveCompare, std::allocator<std::string>>>> mArtists;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_set<std::string, Util::CaseInsensitiveHash, Util::CaseInsensitiveCompare, std::allocator<std::string>>>> mTitles;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::pair<std::string, std::unordered_set<std::string, Util::CaseInsensitiveHash, Util::CaseInsensitiveCompare, std::allocator<std::string>>>>>> mTags;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PreparedFilter& operator=(PreparedFilter const&);
    PreparedFilter(PreparedFilter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PreparedFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMinDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxDuration;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mGenres;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mMoods;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mArtists;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mTitles;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::pair<
            ::std::string,
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>>>
        mTags;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptSoundDefinitionRegistryInternal
