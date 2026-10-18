#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ClipDirection.h"
#include "mc/deps/core/utility/PropertyBag.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UiExpression;
namespace Json { class Value; }
namespace mce { class Color; }
namespace ui { struct LayoutOffset; }
// clang-format on

class UIPropertyBag : public ::PropertyBag {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class UIControl;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class UIPropertyBag : public ::PropertyBag {
#else // @header-generator platform
class UIPropertyBag {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // UIPropertyBag inner types declare
    // clang-format off
    struct ContextObject;
    struct PropertyChangedNotificationInfo;
    // clang-format on

    // UIPropertyBag inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ContextObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> count;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ContextObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> count;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ContextObject {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PropertyChangedNotificationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> targetPropertyName;
        ::ll::UntypedStorage<8, 24>            targetControl;
        ::ll::UntypedStorage<8, 48>            callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyChangedNotificationInfo& operator=(PropertyChangedNotificationInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PropertyChangedNotificationInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PropertyInfoList = std::map<
        std::string,
        std::vector<UIPropertyBag::PropertyChangedNotificationInfo>,
        std::less<void>,
        std::allocator<std::pair<const std::string, std::vector<UIPropertyBag::PropertyChangedNotificationInfo>>>>;

    using PropertyChangedNotificationCallback = std::function<
        void(const std::weak_ptr<UIControl>&, std::string_view, const Json::Value&, UIPropertyBag::ContextObject)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<UIPropertyBag::PropertyChangedNotificationInfo>, std::less<void>, std::allocator<std::pair<const std::string, std::vector<UIPropertyBag::PropertyChangedNotificationInfo>>>>> mPropertyChangedNotificationInfoMap;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIPropertyBag();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _handlePropertyChangedNotifications(std::string_view, ::Json::Value const&, ::UIPropertyBag::ContextObject);

    MCNAPI void append(::UIPropertyBag const&);

    MCNAPI void appendNoOverwrite(::UIPropertyBag const&);

    MCNAPI void clearWeakRegistrations();

    MCNAPI void registerForPropertyChangedNotification(
        std::string const&,
        std::string const&,
        std::weak_ptr<UIControl>,
        std::function<void(
            const std::weak_ptr<UIControl>&,
            std::string_view,
            const Json::Value&,
            UIPropertyBag::ContextObject
        )> const
    );

    MCNAPI void registerForPropertyChangedNotification(
        ::UiExpression const&,
        std::string const&,
        std::weak_ptr<UIControl>,
        std::function<void(
            const std::weak_ptr<UIControl>&,
            std::string_view,
            const Json::Value&,
            UIPropertyBag::ContextObject
        )> const
    );

    MCNAPI void set(std::string_view, ::mce::Color);

    MCNAPI void set(std::string_view, ::glm::vec<2, int, (glm::qualifier)0>);

    MCNAPI void set(std::string_view, ::glm::vec<2, float, (glm::qualifier)0>);

    MCNAPI void set(std::string_view, ::ui::ClipDirection);

    MCNAPI void set(std::string_view, ::buffer_span<int>);

    MCNAPI void set(std::string_view, ::buffer_span<std::string>);

    MCNAPI void set(std::string_view, ::Json::Value const&, ::UIPropertyBag::ContextObject);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PropertyChangedNotificationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                targetPropertyName;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> targetControl;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<void(
                ::std::weak_ptr<::UIControl> const&,
                ::std::string_view,
                ::Json::Value const&,
                ::UIPropertyBag::ContextObject
            )>>
            callback;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyChangedNotificationInfo& operator=(PropertyChangedNotificationInfo const&);
        PropertyChangedNotificationInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PropertyChangedNotificationInfo(::UIPropertyBag::PropertyChangedNotificationInfo const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::UIPropertyBag::PropertyChangedNotificationInfo const&);
        // NOLINTEND
    };

    using PropertyChangedNotificationCallback = ::std::function<void(
        ::std::weak_ptr<::UIControl> const&,
        ::std::string_view,
        ::Json::Value const&,
        ::UIPropertyBag::ContextObject
    )>;

    using PropertyChangedNotificationInfoVector = ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>;

    using PropertyInfoList =
        ::std::map<::std::string, ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>, ::std::less<void>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>, ::std::less<void>>>
        mPropertyChangedNotificationInfoMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIPropertyBag();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIPropertyBag();

    MCAPI explicit UIPropertyBag(::Json::Value const& jsonValue);

    MCAPI void _handlePropertyChangedNotifications(
        ::std::string_view             sourcePropertyName,
        ::Json::Value const&           newValue,
        ::UIPropertyBag::ContextObject context
    );

    MCAPI void append(::UIPropertyBag const& propertyBag);

    MCAPI void appendNoOverwrite(::UIPropertyBag const& propertyBag);

    MCAPI void clearWeakRegistrations();

    MCAPI void registerForPropertyChangedNotification(
        ::std::string const&         sourcePropertyName,
        ::std::string const&         targetPropertyName,
        ::std::weak_ptr<::UIControl> targetControl,
        ::std::function<void(
            ::std::weak_ptr<::UIControl> const&,
            ::std::string_view,
            ::Json::Value const&,
            ::UIPropertyBag::ContextObject
        )> const                     callback
    );

    MCAPI void set(::std::string_view key, ::mce::Color color);

    MCAPI void set(::std::string_view key, ::glm::ivec2 gridSize);

    MCAPI void set(::std::string_view key, ::glm::vec2 uv);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Json::Value const& jsonValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PropertyChangedNotificationInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};
