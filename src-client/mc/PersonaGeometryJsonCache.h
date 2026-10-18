#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PersonaGeometryJsonCache {
public:
    // PersonaGeometryJsonCache inner types declare
    // clang-format off
    struct Entry;
    struct BuildStats;
    // clang-format on

    // PersonaGeometryJsonCache inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID> mPieceId;
        ::ll::UntypedStorage<8, 16>            mJson;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
    };

    struct BuildStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mHits;
        ::ll::TypedStorage<8, 8, ulong> mParsed;
        ::ll::TypedStorage<8, 8, ulong> mSkipped;
        // NOLINTEND
    };

    using EntryList = std::list<PersonaGeometryJsonCache::Entry>;

    using Loader = ::brstd::function_ref<bool(Json::Value&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>                                 mCapacity;
    ::ll::TypedStorage<8, 24, std::list<PersonaGeometryJsonCache::Entry>> mEntries;
    ::ll::UntypedStorage<8, 40>                                           mLookup;
    ::ll::TypedStorage<8, 24, ::PersonaGeometryJsonCache::BuildStats>     mBuildStats;
    ::ll::UntypedStorage<8, 16>                                           mScratch;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaGeometryJsonCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beginBuild();

    MCNAPI ::Json::Value const& getOrLoad(::mce::UUID const&, ::brstd::function_ref<bool(Json::Value&)>);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
