#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/UiExpression.h"
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenController;
class UIControl;
// clang-format on

class DataBindingComponent : public ::UIComponent {
public:
    // DataBindingComponent inner types declare
    // clang-format off
    struct DataBinding;
    // clang-format on

    // DataBindingComponent inner types define
    struct DataBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::BindingType>             bindingType;
        ::ll::TypedStorage<4, 4, ::BindingCondition>        bindingCondition;
        ::ll::TypedStorage<8, 24, std::string>              bindingName;
        ::ll::TypedStorage<8, 32, ::UiExpression>           bindingExpression;
        ::ll::TypedStorage<8, 24, std::string>              bindingNameOverride;
        ::ll::TypedStorage<8, 24, std::string>              collectionName;
        ::ll::TypedStorage<8, 24, std::string>              collectionPrefix;
        ::ll::TypedStorage<8, 32, ::UiExpression>           viewBindingSourcePropertyName;
        ::ll::TypedStorage<8, 24, std::string>              viewBindingTargetPropertyName;
        ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> viewBindingSourceControl;
        ::ll::TypedStorage<4, 4, uint>                      collectionNameHash;
        ::ll::TypedStorage<4, 4, uint>                      bindingNameHash;
        ::ll::TypedStorage<4, 4, int>                       collectionIndex;
        ::ll::TypedStorage<1, 1, bool>                      alreadyBoundOnce;
        ::ll::TypedStorage<1, 1, bool>                      visible;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataBinding& operator=(DataBinding const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DataBinding(::DataBindingComponent::DataBinding const&);

        MCNAPI ~DataBinding();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::DataBindingComponent::DataBinding const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DataBindingComponent::DataBinding>> mBindings;
    ::ll::TypedStorage<8, 24, std::vector<DataBindingComponent::DataBinding>> mPriorityBindings;
    ::ll::TypedStorage<8, 24, std::vector<DataBindingComponent::DataBinding>> mAlwaysBindings;
    ::ll::TypedStorage<1, 1, bool>                                            mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBindingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataBindingComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _addBindings(::BindingType, std::string const&, ::UiExpression&, std::string const&, ::BindingCondition const);

    MCNAPI void _bind(::ScreenController&, bool, std::vector<DataBindingComponent::DataBinding>&);

    MCNAPI void _updateCollectionBindingIndicies();

    MCNAPI void _updateCustomComponentsPostBinding(std::string_view, ::UIControl&, ::UiExpression);

    MCNAPI void addCollectionBinding(std::string const&, ::UiExpression, std::string const&, ::BindingCondition const);

    MCNAPI void addCollectionDetailsBinding(std::string const&, std::string const&, ::BindingCondition const);

    MCNAPI void addGlobalBinding(::UiExpression, std::string const&, ::BindingCondition const);

    MCNAPI void addViewBinding(std::shared_ptr<UIControl>&, ::UiExpression, std::string const&);

    MCNAPI void bindAlwaysBinds(::ScreenController&, bool);

    MCNAPI void bindHighPriorityBinds(::ScreenController&, bool);

    MCNAPI void bindLowPriorityBinds(::ScreenController&, bool);

    MCNAPI bool getDirty() const;

    MCNAPI bool hasAlwaysBinds() const;

    MCNAPI void setDirty(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
