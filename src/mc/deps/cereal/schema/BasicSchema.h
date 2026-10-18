#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/OverrideState.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cereal::internal { struct OverrideState; }
#endif // @header-generator platform
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct TaggedVariantDescriptor;
    struct EnumMapping;
    struct MemberFamily;
    struct TypeDescriptor;
    struct MemberDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
    struct DynamicSetterArg;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct EnumMapping;
#endif // @header-generator platform
    struct GetterDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MemberDescriptor;
    struct MemberFamily;
#endif // @header-generator platform
    struct SetterDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TaggedVariantDescriptor;
    struct TypeDescriptor;
#endif // @header-generator platform
    // clang-format on

    // BasicSchema inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TaggedVariantDescriptor {
#else // @header-generator platform
    struct DynamicSetterArg {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)> mResolve;
        ::ll::TypedStorage<8, 24, std::string>                                   mTaggedName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                   mArg;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::SerializerContext const*>> mContext;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        TaggedVariantDescriptor& operator=(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor(TaggedVariantDescriptor const&);
        TaggedVariantDescriptor();
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 40, std::unordered_map<uint, cereal::internal::BasicSchema::EnumMapping::EnumValue>>
                                                          mValues;
            ::ll::TypedStorage<4, 8, std::optional<uint>> mParent;
#else // @header-generator platform
            ::ll::
                TypedStorage<8, 64, ::std::unordered_map<uint, ::cereal::internal::BasicSchema::EnumMapping::EnumValue>>
                                                            mValues;
            ::ll::TypedStorage<4, 8, ::std::optional<uint>> mParent;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            View& operator=(View const&);
            View(View const&);
            View();
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<cereal::internal::BasicSchema::EnumMapping::View>> mViews;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::cereal::internal::BasicSchema::EnumMapping::View>> mViews;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        EnumMapping& operator=(EnumMapping const&);
        EnumMapping(EnumMapping const&);
        EnumMapping();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct MemberFamily {
#else // @header-generator platform
    struct GetterDescriptor {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                              mAllowedAreas;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct MemberDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::Constraint>> mConstraint;
        ::ll::TypedStorage<8, 24, std::string> mNameExt;
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<8, 8, ::entt::meta_type(*)(::entt::meta_ctx const&)> mDynamicSetterArgCtor;
        ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>, cereal::util::internal::StringViewHash, std::equal_to<void>, std::allocator<std::pair<const std::string, std::pair<entt::meta_type (*)(const entt::meta_ctx&), entt::basic_any<16, 8>>>>>> mUserPropertiesMap;
        ::ll::UntypedStorage<8, 24> mOverridingTypes;
        ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mNameExt;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mName;
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)>     mDynamicSetterArgCtor;
        ::ll::TypedStorage<
            8,
            72,
            ::entt::dense_map<
                ::std::string,
                ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
                ::cereal::util::internal::StringViewHash,
                ::std::equal_to<void>>>
            mUserPropertiesMap;
        ::ll::TypedStorage<
            8,
            24,
            ::brstd::flat_set<
                ::cereal::internal::OverrideState,
                ::std::less<void>,
                ::std::vector<::cereal::internal::OverrideState>>>
                                                                mOverridingTypes;
        ::ll::TypedStorage<8, 32, ::std::string>                mErrorMessage;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraits;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea> mAllowedAreas;
        ::ll::TypedStorage<4, 8, std::optional<uint>> mScope;
        ::ll::TypedStorage<1, 1, bool> mIsDeprecatedComponent;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>         mAllowedAreas;
        ::ll::TypedStorage<4, 8, ::std::optional<uint>>         mScope;
        ::ll::TypedStorage<1, 1, bool>                          mIsDeprecatedComponent;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~MemberDescriptor();
#else // @header-generator platform
        MCAPI ~MemberDescriptor();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct DynamicSetterArg {
#else // @header-generator platform
    struct MemberFamily {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                 mArg;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const cereal::SerializerContext*>> mContext;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::string_view>                                  mPrefix;
        ::ll::TypedStorage<8, 40, ::std::basic_regex<char, ::std::regex_traits<char>>> mRegex;
        ::ll::TypedStorage<4, 4, uint>                                                 mMemberId;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                          mAllowedAreas;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                              mAllowedAreas;
        // NOLINTEND
    };

    struct TaggedVariantDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)> mResolve;
        ::ll::TypedStorage<8, 32, ::std::string>                                 mTaggedName;
        // NOLINTEND
    };

    struct TypeDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mName;
        ::ll::TypedStorage<8, 24, ::cereal::internal::BasicSchema::EnumMapping>      mEnumMapping;
        ::ll::TypedStorage<
            8,
            72,
            ::entt::dense_map<
                ::std::string,
                ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
                ::cereal::util::internal::StringViewHash,
                ::std::equal_to<void>>>
                                                                                                mUserPropertiesMap;
        ::ll::TypedStorage<8, 24, ::std::vector<::cereal::internal::BasicSchema::MemberFamily>> mMemberFamilies;
        ::ll::TypedStorage<8, 32, ::std::string>                                                mErrorMessage;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCAPI ~TypeDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using IdType = uint;
#else // @header-generator platform
    using DynamicGetterWrapper = ::entt::meta_any (*)(::entt::meta_any const&, ::cereal::SerializerContext const&);
#endif // @header-generator platform

    using DynamicSetterArgCtor = ::entt::meta_type (*)(::entt::meta_ctx const&);

#if defined(LL_PLAT_A) // @header-generator platform
    using OverridingSet = ::brstd::
        flat_set<cereal::internal::OverrideState, std::less<void>, std::vector<cereal::internal::OverrideState>>;
#else // @header-generator platform
    using IdType = uint;

    using OverridingSet = ::brstd::flat_set<
        ::cereal::internal::OverrideState,
        ::std::less<void>,
        ::std::vector<::cereal::internal::OverrideState>>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~BasicSchema() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isGreedy(::entt::meta_ctx const&) const;
#else // @header-generator platform
    virtual bool isGreedy(::entt::meta_ctx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const&) const;
#else // @header-generator platform
    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    virtual bool doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::internal::BasicSchema const& doUnwrap(::entt::meta_any&, bool) const;
#else // @header-generator platform
    virtual ::cereal::internal::BasicSchema const& doUnwrap(::entt::meta_any& elem, bool fillIfEmpty) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;
#else // @header-generator platform
    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
#else // @header-generator platform
    virtual void doSave(
        ::cereal::SchemaWriter&              value,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::cereal::SchemaDescription
    makeDescription(::cereal::internal::ReflectionContext const& ctx, ::cereal::DescriptionConfig config) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaDescription
    description(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;

    MCNAPI void load(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const&
#else // @header-generator platform
    MCAPI void load(
        ::cereal::SchemaReader&              value,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool
    map(::cereal::internal::BasicSchema const& schema,
        ::entt::meta_any&                      src,
        ::entt::meta_any&                      dst,
        ::cereal::MetaVisitor&                 visitor) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isGreedy(::entt::meta_ctx const&) const;
#else // @header-generator platform
    MCFOLD bool $isGreedy(::entt::meta_ctx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const&) const;
#else // @header-generator platform
    MCFOLD ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    MCFOLD bool $doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::BasicSchema const& $doUnwrap(::entt::meta_any&, bool) const;
#else // @header-generator platform
    MCFOLD ::cereal::internal::BasicSchema const& $doUnwrap(::entt::meta_any& elem, bool fillIfEmpty) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
