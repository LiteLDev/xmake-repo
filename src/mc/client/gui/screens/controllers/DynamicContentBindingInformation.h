#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DynamicContentBindingInformation : public ::std::enable_shared_from_this<DynamicContentBindingInformation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mData;
    ::ll::UntypedStorage<8, 48> mOnContentItemChangedCallback;
    ::ll::UntypedStorage<8, 48> mEmoticonifyTextCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicContentBindingInformation();

    virtual void createBindingData(::Json::Value const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setEmoticonifyTextCallback(std::function<std::string(const std::string&)>);

    MCNAPI void setOnContentItemChangedCallback(std::function<void(Json::Value&)> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createBindingData(::Json::Value const&);
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
#include "mc/deps/json/Value.h"

class DynamicContentBindingInformation : public ::std::enable_shared_from_this<::DynamicContentBindingInformation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value>                                        mData;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Json::Value&)>>                mOnContentItemChangedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> mEmoticonifyTextCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicContentBindingInformation() = default;

    virtual void createBindingData(::Json::Value const& contentData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createBindingData(::Json::Value const& contentData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DynamicContentBindingInformation {};
#endif // @header-generator platform
#endif // @header-generator platform
