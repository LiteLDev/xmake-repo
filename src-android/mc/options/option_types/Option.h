#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
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
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOverrideSourceValueChangedSubscription;
        ::ll::UntypedStorage<8, 24> mOverrideSourceInputModeChangedSubscription;
        ::ll::UntypedStorage<8, 48> mRequestSaveCallback;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
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
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using StringFilter = std::function<std::string(const std::string&)>;

    using BoolFilter = std::function<bool(bool)>;

    using SaveIntCallback = std::function<int(int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Option::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    Option();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Option();

    virtual void save(std::vector<std::pair<std::string, std::string>>&) = 0;

    virtual void load(::Json::Value const&);

    virtual void load(std::map<std::string, std::string>&);

    virtual void load(std::string const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool read(std::string const&, float&);

    MCNAPI static bool read(std::string const&, bool&);

    MCNAPI static bool read(std::string const&, int&);
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::Json::Value const&);

    MCNAPI void $load(std::map<std::string, std::string>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
