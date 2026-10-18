#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/AllowListEntry.h"
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AllowListEntry;
#endif // @header-generator platform
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AllowList : public ::IJsonSerializable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AllowListEntry>> mEntries;
    ::ll::UntypedStorage<8, 48>                            mSyncCallback;
    ::ll::UntypedStorage<1, 16>                            mIsEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowListEntry>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>         mSyncCallback;
    ::ll::TypedStorage<1, 1, bool>                             mIsEnabled;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AllowList();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AllowList();
#else // @header-generator platform
    virtual ::Json::Value serialize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value serialize() const;

    virtual void deserialize(::Json::Value const&);
#else // @header-generator platform
    virtual void deserialize(::Json::Value const& root) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AllowList(std::function<void()>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit AllowList(::std::function<void()> syncCallback);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addByNsaId(std::string_view);
#else // @header-generator platform
    MCAPI bool isAllowed(
        ::mce::UUID const& uuid,
        ::std::string_view xuid,
        ::std::string_view psnId,
        ::std::string_view nsaId
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addByPsnId(std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool removeByName(::std::string_view name);

    MCAPI bool removeByXuid(::std::string_view xuid);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool addByXuid(std::string_view);

    MCNAPI bool isAllowed(::mce::UUID const&, std::string_view, std::string_view, std::string_view) const;

    MCNAPI bool isEnabled();

    MCNAPI bool isIgnoringPlayerLimit(::mce::UUID const&, std::string_view) const;

    MCNAPI void setIsEnabled(bool);

    MCNAPI void tryUpdateEntries(std::string_view, std::string_view, std::string_view, std::string_view);
#else // @header-generator platform
    MCAPI void tryUpdateEntries(
        ::std::string_view name,
        ::std::string_view xuid,
        ::std::string_view psnId,
        ::std::string_view nsaId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::function<void()> syncCallback);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value $serialize() const;
#else // @header-generator platform
    MCAPI ::Json::Value $serialize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserialize(::Json::Value const&);
#else // @header-generator platform
    MCAPI void $deserialize(::Json::Value const& root);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
