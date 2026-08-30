#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/schema/OverrideState.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"
#include "mc/external/cereal/StringViewHash.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct MetaVisitor; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct TaggedVariantDescriptor;
    struct EnumMapping;
    struct MemberFamily;
    struct TypeDescriptor;
    struct MemberDescriptor;
    struct DynamicSetterArg;
    struct GetterDescriptor;
    struct SetterDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct TaggedVariantDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)> mResolve;
        ::ll::TypedStorage<8, 24, std::string>                                   mTaggedName;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaggedVariantDescriptor& operator=(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor();
    };

    struct EnumMapping {
    public:
        // EnumMapping inner types declare
        // clang-format off
        struct EnumValue;
        struct View;
        // clang-format on

        // EnumMapping inner types define
        struct EnumValue {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<1, 1, bool> mIsDeprecated;
            // NOLINTEND
        };

        struct View {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, uint> mScope;
            ::ll::TypedStorage<8, 40, std::unordered_map<uint, cereal::internal::BasicSchema::EnumMapping::EnumValue>>
                                                          mValues;
            ::ll::TypedStorage<4, 8, std::optional<uint>> mParent;
            // NOLINTEND

        public:
            // prevent constructor by default
            View& operator=(View const&);
            View(View const&);
            View();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<cereal::internal::BasicSchema::EnumMapping::View>> mViews;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumMapping& operator=(EnumMapping const&);
        EnumMapping(EnumMapping const&);
        EnumMapping();
    };

    struct MemberFamily {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::string_view>                                mPrefix;
        ::ll::TypedStorage<8, 64, std::basic_regex<char, std::regex_traits<char>>> mRegex;
        ::ll::TypedStorage<4, 4, uint>                                             mMemberId;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemberFamily& operator=(MemberFamily const&);
        MemberFamily(MemberFamily const&);
        MemberFamily();
    };

    struct TypeDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<8, 24, ::cereal::internal::BasicSchema::EnumMapping> mEnumMapping;
        ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>, cereal::util::internal::StringViewHash, std::equal_to<void>, std::allocator<std::pair<const std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>>>>> mUserPropertiesMap;
        ::ll::TypedStorage<8, 24, std::vector<cereal::internal::BasicSchema::MemberFamily>> mMemberFamilies;
        ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeDescriptor& operator=(TypeDescriptor const&);
        TypeDescriptor(TypeDescriptor const&);
        TypeDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TypeDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MemberDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::Constraint>> mConstraint;
        ::ll::TypedStorage<8, 24, std::string> mNameExt;
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<8, 8, ::entt::meta_type(*)(::entt::meta_ctx const&)> mDynamicSetterArgCtor;
        ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>, cereal::util::internal::StringViewHash, std::equal_to<void>, std::allocator<std::pair<const std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>>>>> mUserPropertiesMap;
        ::ll::UntypedStorage<8, 24> mOverridingTypes;
        ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
        ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraits;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea> mAllowedAreas;
        ::ll::TypedStorage<4, 8, std::optional<uint>> mScope;
        ::ll::TypedStorage<1, 1, bool> mIsDeprecatedComponent;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MemberDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DynamicSetterArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                 mArg;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const cereal::SerializerContext*>> mContext;
        // NOLINTEND

    public:
        // prevent constructor by default
        DynamicSetterArg();
    };

    struct GetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                          mAllowedAreas;
        // NOLINTEND

    public:
        // prevent constructor by default
        GetterDescriptor& operator=(GetterDescriptor const&);
        GetterDescriptor(GetterDescriptor const&);
        GetterDescriptor();
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                          mAllowedAreas;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();
    };

    using IdType = uint;

    using DynamicSetterArgCtor = ::entt::meta_type (*)(::entt::meta_ctx const&);

    using OverridingSet = ::brstd::
        flat_set<cereal::internal::OverrideState, std::less<void>, std::vector<cereal::internal::OverrideState>>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BasicSchema() = default;

    virtual bool isGreedy(::entt::meta_ctx const&) const;

    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const&) const;

    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    virtual ::cereal::internal::BasicSchema const& doUnwrap(::entt::meta_any&, bool) const;

    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;

    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;

    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SchemaDescription
    description(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;

    MCNAPI void load(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const&
    ) const;

    MCNAPI bool
    map(::cereal::internal::BasicSchema const&, ::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI void save(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;

    MCNAPI ::cereal::internal::BasicSchema const& unwrap(::entt::meta_any&, bool) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    forwardDoMap(::cereal::internal::BasicSchema const&, ::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGreedy(::entt::meta_ctx const&) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const&) const;

    MCNAPI bool $doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI ::cereal::internal::BasicSchema const& $doUnwrap(::entt::meta_any&, bool) const;
    // NOLINTEND
};

} // namespace cereal::internal
