#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class FactoryComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControlFactory>>              mControlFactory;
    ::ll::TypedStorage<8, 24, std::string>                                  mFactoryName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mControlIdToTemplateLookup;
    ::ll::UntypedStorage<8, 24>                                             mVariables;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>>                   mControlTemplate;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<UIControl>>>        mProgeny;
    ::ll::TypedStorage<1, 1, bool>                                          mFactoryIsChild;
    ::ll::TypedStorage<4, 4, int>                                           mMaxSize;
    ::ll::TypedStorage<4, 4, ::ui::ChildInsertPosition>                     mInsertPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    FactoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FactoryComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _prepareControlForDestruction(std::shared_ptr<UIControl>);

    MCNAPI void addControlIdToTemplateName(std::string const&, std::string const&);

    MCNAPI void addVariable(std::string const&, ::Json::Value const&);

    MCNAPI std::weak_ptr<UIControl> create(::UIPropertyBag const&, bool);

    MCNAPI void destroy(std::string const&);

    MCNAPI void destroyAll();

    MCNAPI void destroyAllStartingAtIndex(uint const);

    MCNAPI std::shared_ptr<UIControl> getControlTemplate() const;

    MCNAPI std::string const& getFactoryName() const;

    MCNAPI void setControlTemplate(std::shared_ptr<UIControl> const);

    MCNAPI void setFactoryIsChild(bool);

    MCNAPI void setFactoryName(std::string const&);

    MCNAPI void setInsertPosition(::ui::ChildInsertPosition);

    MCNAPI void setMaxSize(int);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class FactoryComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControlFactory>>                mControlFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mFactoryName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mControlIdToTemplateLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string const, ::Json::Value const>>> mVariables;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>>                                       mControlTemplate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>>                          mProgeny;
    ::ll::TypedStorage<1, 1, bool>                                                                  mFactoryIsChild;
    ::ll::TypedStorage<4, 4, int>                                                                   mMaxSize;
    ::ll::TypedStorage<4, 4, ::ui::ChildInsertPosition>                                             mInsertPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    FactoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FactoryComponent(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);

    MCAPI void _prepareControlForDestruction(::std::shared_ptr<::UIControl> control);

    MCAPI void addVariable(::std::string const& varName, ::Json::Value const& var);

    MCAPI ::std::weak_ptr<::UIControl> create(::UIPropertyBag const& properties, bool ensureCreation);

    MCAPI void destroy(::std::string const& name);

    MCAPI void destroyAll();

    MCAPI void destroyAllStartingAtIndex(uint const index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FactoryComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
