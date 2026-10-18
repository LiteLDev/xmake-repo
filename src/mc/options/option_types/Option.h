#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/options/option_types/OptionType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
// clang-format on

class Option {
public:
    // Option inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // Option inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::UntypedStorage<8, 88> mValueChangedPublisher;
        ::ll::UntypedStorage<8, 88> mInputModeChangedPublisher;
        ::ll::UntypedStorage<8, 88> mValueResetPublisher;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (bool&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mLock;
        ::ll::TypedStorage<8, 24, std::string> mSaveTag;
        ::ll::TypedStorage<8, 24, std::string> mTelemetryProperty;
        ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<4, 4, ::OptionID const> mID;
        ::ll::TypedStorage<4, 4, ::OptionOwnerType const> mOwnerType;
        ::ll::TypedStorage<4, 4, ::OptionType> mOptionType;
        ::ll::TypedStorage<8, 24, std::string const> mCaptionId;
        ::ll::TypedStorage<8, 48, ::GameVersion> mDefaultVersion;
        ::ll::TypedStorage<4, 4, ::OptionResetFlags const> mOptionResetFlags;
        ::ll::TypedStorage<8, 8, ::Option*> mOverrideSource;
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<void(::Option const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mValueChangedPublisher;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::
                Publisher<void(::Option const&, ::InputMode), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mInputModeChangedPublisher;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<void(::Option const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mValueResetPublisher;
        ::ll::TypedStorage<
            8,
            8,
            ::std::unique_ptr<
                ::Bedrock::PubSub::Publisher<void(bool&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                 mLock;
        ::ll::TypedStorage<8, 32, ::std::string> mSaveTag;
        ::ll::TypedStorage<8, 32, ::std::string> mTelemetryProperty;
#ifdef LL_PLAT_S
        ::ll::TypedStorage<1, 4, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<1, 4, ::OptionID const>                       mID;
#else // LL_PLAT_C
        ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<4, 4, ::OptionID const>                       mID;
#endif
        ::ll::TypedStorage<4, 4, ::OptionOwnerType const>          mOwnerType;
        ::ll::TypedStorage<4, 4, ::OptionType>                     mOptionType;
        ::ll::TypedStorage<8, 32, ::std::string const>             mCaptionId;
        ::ll::TypedStorage<8, 56, ::GameVersion>                   mDefaultVersion;
        ::ll::TypedStorage<4, 4, ::OptionResetFlags const>         mOptionResetFlags;
        ::ll::TypedStorage<8, 8, ::Option*>                        mOverrideSource;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOverrideSourceValueChangedSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24> mOverrideSourceInputModeChangedSubscription;
        ::ll::UntypedStorage<8, 48> mRequestSaveCallback;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOverrideSourceInputModeChangedSubscription;
        ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>     mRequestSaveCallback;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Impl();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Impl(
            ::OptionID,
            ::OptionOwnerType,
            ::OptionResetFlags,
            std::string const&,
            std::string const&,
            ::OptionType,
            ::GameVersion
        );

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::OptionID,
            ::OptionOwnerType,
            ::OptionResetFlags,
            std::string const&,
            std::string const&,
            ::OptionType,
            ::GameVersion
        );
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ~Impl();
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using StringFilter = std::function<std::string(const std::string&)>;
#else // @header-generator platform
    using BoolFilter = ::std::function<bool(bool)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BoolFilter = std::function<bool(bool)>;
#else // @header-generator platform
    using SaveIntCallback = ::std::function<int(int)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SaveIntCallback = std::function<int(int)>;
#else // @header-generator platform
    using StringFilter = ::std::function<::std::string(::std::string const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Option::Impl>> mImpl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Option::Impl>> mImpl;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    Option();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Option();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Option();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~Option() = default;
#else // LL_PLAT_C
    virtual ~Option();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&) = 0;
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::Json::Value const&);
#else // @header-generator platform
    virtual void load(::std::string const& valueString) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::map<std::string, std::string>&);
#else // @header-generator platform
    virtual void load(::std::map<::std::string, ::std::string>& propertyMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::string const&) = 0;
#else // @header-generator platform
    virtual void load(::Json::Value const& valueJson);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Option(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        ::OptionType,
        ::GameVersion
    );

    MCNAPI void _resetOption(::InputMode, bool);

    MCNAPI void _updatePropertyVector(std::vector<std::pair<std::string, std::string>>&, std::string const&);

    MCNAPI bool canModify() const;

    MCNAPI void clearSaveTag();

    MCNAPI bool getBool() const;

    MCNAPI bool getBool(::InputMode) const;

    MCNAPI std::string const& getCaptionId() const;

    MCNAPI float getFloat() const;

    MCNAPI float getFloat(::InputMode) const;

    MCNAPI float getFloatMax() const;

    MCNAPI float getFloatMin() const;

    MCNAPI ::OptionID getID() const;

    MCNAPI int getInt() const;

    MCNAPI long getInt64() const;

    MCNAPI int getIntMax() const;

    MCNAPI int getIntMin() const;

    MCNAPI ::OptionOwnerType getOptionOwnerType() const;

    MCNAPI ::OptionResetFlags getOptionResetFlags() const;

    MCNAPI std::string const& getSaveTag() const;

    MCNAPI std::string const& getString() const;

    MCNAPI std::vector<std::string> getStringList() const;

    MCNAPI std::string const& getTelemetryProperty() const;

    MCNAPI ::Social::Events::PrivacyTagEnterprise getTelemetryTag() const;

    MCNAPI ::OptionType getType() const;

    MCNAPI std::unordered_map<int, std::string> const& getValueNameMap() const;

    MCNAPI std::vector<int> const& getValues() const;

    MCNAPI bool hasOverrideSource() const;

    MCNAPI bool isDefaultValue() const;

    MCNAPI bool isDefaultValue(::InputMode) const;

    MCNAPI bool isNewVersion(::GameVersion) const;

    MCNAPI bool isType(::OptionType) const;

    MCNAPI void notifyOptionValueChanged(bool);

    MCNAPI void notifyOptionValueChanged(::InputMode, bool);

    MCNAPI ::Bedrock::PubSub::Subscription registerLock(std::function<void(bool&)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(std::function<void(const Option&)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(std::function<void(const Option&, InputMode)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerResetObserver(std::function<void(const Option&)>);

    MCNAPI ::Option& registerTelemetryProperty(std::string const&, ::Social::Events::PrivacyTagEnterprise);

    MCNAPI void reset();

    MCNAPI void reset(::InputMode);

    MCNAPI void resetForced(bool);

    MCNAPI void set(int);

    MCNAPI void set(::InputMode, float);

    MCNAPI void set(::InputMode, bool);

    MCNAPI void setCoerceSaveValueCallback(std::function<int(int)>);

    MCNAPI void setCoerceValueCallback(std::function<std::string(const std::string&)>);

    MCNAPI void setCoerceValueCallback(std::function<bool(bool)>);

    MCNAPI void setOverrideSource(::Option*);

    MCNAPI void setRequestSaveCallback(std::function<void(bool)>);

    MCNAPI void toggle();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI Option(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );

    MCAPI void _resetOption(::InputMode inputMode, bool saveOptionChange);

    MCAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCAPI bool canModify() const;

    MCAPI bool isDefaultValue(::InputMode inputMode) const;

    MCAPI bool isNewVersion(::GameVersion currentVersion) const;

    MCAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCAPI ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&)> onValueChangedCallback);

    MCAPI void setCoerceSaveValueCallback(::std::function<int(int)> callback);

    MCAPI void setCoerceValueCallback(::std::function<::std::string(::std::string const&)> f);

    MCAPI void setCoerceValueCallback(::std::function<bool(bool)> f);

    MCAPI void setOverrideSource(::Option* overrideSource);

    MCAPI void toggle();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool read(std::string const&, float&);

    MCNAPI static bool read(std::string const&, bool&);

    MCNAPI static bool read(std::string const&, int&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool read(::std::string const& valueString, int& output);

    MCAPI static bool read(::std::string const& valueString, float& output);

    MCAPI static bool read(::std::string const& valueString, bool& output);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        ::OptionType,
        ::GameVersion
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::Json::Value const&);
#else // @header-generator platform
    MCAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(std::map<std::string, std::string>&);
#else // @header-generator platform
    MCAPI void $load(::Json::Value const& valueJson);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
