#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ui { struct LayoutOffset; }
// clang-format on

class GridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>>    mDimensions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>>              mGridItemTemplate;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControlFactory>>         mControlFactory;
    ::ll::TypedStorage<8, 24, std::string>                             mGridDimensionBinding;
    ::ll::TypedStorage<8, 24, std::string>                             mCollectionName;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                    mGridRescalingType;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                    mGridFillDirection;
    ::ll::TypedStorage<4, 4, int>                                      mMaximumGridItems;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> mCachedControls;
    ::ll::TypedStorage<1, 1, bool>                                     mLowMemoryMode;
    ::ll::TypedStorage<4, 4, int>                                      mPartialCreationStartIndex;
    ::ll::TypedStorage<4, 4, int>                                      mPartialCreationEndIndex;
    ::ll::UntypedStorage<8, 88>                                        mPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    GridComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GridComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void onNotifyChildAdded();

    virtual void onNotifyChildRemoved();

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GridComponent(::UIControl&, std::weak_ptr<UIControlFactory>);

    MCNAPI void _assignStaticGridItemIndexes();

    MCNAPI std::pair<int, int> getClippedCollectionRange() const;

    MCNAPI std::string const& getCollectionName() const;

    MCNAPI int getExpectedSize() const;

    MCNAPI ::glm::vec<2, int, (glm::qualifier)0> const& getGridDimensions() const;

    MCNAPI ::ui::OrientationType const& getGridFillDirection() const;

    MCNAPI std::shared_ptr<UIControl> getGridItemTemplate() const;

    MCNAPI ::ui::OrientationType const& getGridRescalingType() const;

    MCNAPI int getMaximumGridItems() const;

    MCNAPI bool getNeedsRescaling() const;

    MCNAPI bool isDynamic() const;

    MCNAPI bool partiallyCreateGridItems(int, int);

    MCNAPI void reassignGridPositions();

    MCNAPI void refreshGridItems();

    MCNAPI void setCollectionName(std::string const&);

    MCNAPI void setGridDimensionBinding(std::string const&);

    MCNAPI void setGridDimensions(::glm::vec<2, int, (glm::qualifier)0> const&);

    MCNAPI void setGridFillDirection(::ui::OrientationType const&);

    MCNAPI void setGridItemTemplate(std::shared_ptr<UIControl> const);

    MCNAPI void setGridRescalingType(::ui::OrientationType const&);

    MCNAPI void setLowMemoryMode(bool);

    MCNAPI void setMaximumGridItems(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&, std::weak_ptr<UIControlFactory>);
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

    MCNAPI void $onNotifyChildAdded();

    MCNAPI void $onNotifyChildRemoved();

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
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::ivec2>                                   mDimensions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>>                mGridItemTemplate;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControlFactory>>           mControlFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mGridDimensionBinding;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCollectionName;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                          mGridRescalingType;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                          mGridFillDirection;
    ::ll::TypedStorage<4, 4, int>                                            mMaximumGridItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mCachedControls;
    ::ll::TypedStorage<1, 1, bool>                                           mLowMemoryMode;
    ::ll::TypedStorage<4, 4, int>                                            mPartialCreationStartIndex;
    ::ll::TypedStorage<4, 4, int>                                            mPartialCreationEndIndex;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(uint64), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onNotifyChildAdded() /*override*/;

    virtual void onNotifyChildRemoved() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool partiallyCreateGridItems(int startIndex, int endIndex);

    MCAPI void reassignGridPositions();

    MCAPI void refreshGridItems();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCFOLD void $onNotifyChildAdded();

    MCFOLD void $onNotifyChildRemoved();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GridComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
