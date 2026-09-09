#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/AllowListEntry.h"
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AllowList : public ::IJsonSerializable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AllowListEntry>> mEntries;
    ::ll::UntypedStorage<8, 48>                            mSyncCallback;
    ::ll::UntypedStorage<1, 16>                            mIsEnabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AllowList();

    virtual ::Json::Value serialize() const;

    virtual void deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AllowList(std::function<void()>);

    MCNAPI bool addByNsaId(std::string_view);

    MCNAPI bool addByPsnId(std::string_view);

    MCNAPI bool addByXuid(std::string_view);

    MCNAPI bool isAllowed(::mce::UUID const&, std::string_view, std::string_view, std::string_view) const;

    MCNAPI bool isEnabled();

    MCNAPI bool isIgnoringPlayerLimit(::mce::UUID const&, std::string_view) const;

    MCNAPI void setIsEnabled(bool);

    MCNAPI void tryUpdateEntries(std::string_view, std::string_view, std::string_view, std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $serialize() const;

    MCNAPI void $deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
