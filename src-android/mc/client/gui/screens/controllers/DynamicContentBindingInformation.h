#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
