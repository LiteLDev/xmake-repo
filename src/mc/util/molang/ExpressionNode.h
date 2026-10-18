#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/molang/IComplexExpression.h"
#include "mc/util/molang/MolangParseConfig.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/MolangScriptArg.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class MaterialVariants;
class RenderParams;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct ExpressionQueries;
#if defined(LL_PLAT_A) // @header-generator platform
struct MolangClientTextureSet;
#else // @header-generator platform
#endif // @header-generator platform
struct MolangDataDrivenGeometry;
struct MolangParseConfig;
struct MolangQueryFunction;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MolangScriptArg;
#endif // @header-generator platform
namespace Json { class Value; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class SourceTree; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct ResourceReference;
    // clang-format on

    // ExpressionNode inner types define
    struct ResourceReference {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 88, ::MolangScriptArg> mNewValue;
        ::ll::TypedStorage<2, 2, ::ExpressionOp>     mNewOpType;
        ::ll::TypedStorage<1, 1, bool>               mIsUsed;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
        ::ll::UntypedStorage<8, 88> mUnkdeb2d8;
#else // LL_PLAT_C
        ::ll::UntypedStorage<8, 96> mUnkdeb2d8;
#endif
        ::ll::UntypedStorage<2, 2> mUnk80cca4;
        ::ll::UntypedStorage<1, 1> mUnk749abb;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ResourceReference(ResourceReference const&);
        ResourceReference();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit ResourceReference(::MolangDataDrivenGeometry const&);

        MCNAPI explicit ResourceReference(::MolangClientTextureSet const&);

        MCNAPI explicit ResourceReference(::MaterialVariants const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI explicit ResourceReference(::MolangDataDrivenGeometry const& geometry);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::MolangDataDrivenGeometry const&);

        MCNAPI void* $ctor(::MolangClientTextureSet const&);

        MCNAPI void* $ctor(::MaterialVariants const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::MolangDataDrivenGeometry const& geometry);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using GetParticleTintFunc = std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>;
#else // @header-generator platform
    using GetParticleTintFunc = ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using MissingResourceSet = ::brstd::flat_set<HashedString, std::less<HashedString>, std::vector<HashedString>>;
#else // @header-generator platform
    using IComplexExpression = ::Molang::details::IComplexExpression;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ResourceTable = std::unordered_map<HashedString, ExpressionNode::ResourceReference>;
#else // @header-generator platform
    using MissingResourceSet =
        ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>;

    using ResourceTable = ::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::variant<std::unique_ptr<Molang::details::IComplexExpression>, float>> mImpl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::variant<::std::unique_ptr<::Molang::details::IComplexExpression>, float>> mImpl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    ExpressionNode(
        std::string const&                expression,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    )
    : ExpressionNode(expression, molangVersion) {
        MolangParseConfig config;
        config.mVersion          = molangVersion;
        config.mAllowedQuerySets = querySetID;
        parse(expression, config);
    }

    LLAPI MolangScriptArg const& evalGeneric(RenderParams& renderParams) const;

#ifdef LL_PLAT_S
    static std::function<::MolangScriptArg const&(RenderParams&, std::vector<::ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        ::HashedString const&            functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );
#endif

public:
    // prevent constructor by default
    ExpressionNode(ExpressionNode const&);
    ExpressionNode();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ExpressionNode(::MaterialVariants const& materialVariants);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ExpressionNode(float);
#else // @header-generator platform
    MCAPI explicit ExpressionNode(::Molang::details::SourceTree root);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ExpressionNode(::MaterialVariants const&);
#else // @header-generator platform
    MCAPI ExpressionNode(::std::string const& expression, ::MolangVersion molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ExpressionNode(::Molang::details::SourceTree);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ExpressionNode(char const* expression, ::MolangVersion molangVersion);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::ExpressionNode const&);
#else // @header-generator platform
    MCAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::ExpressionNode&&);
#else // @header-generator platform
    MCAPI ExpressionNode(::MolangScriptArg const& value, ::ExpressionOp op);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(char const*, ::MolangVersion const);
#else // @header-generator platform
    MCAPI ::std::optional<::MolangScriptArg> _getValueIfConstant() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(std::string const&, ::MolangVersion const);
#else // @header-generator platform
    MCAPI ::std::string getExpressionString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::MolangScriptArg const&, ::ExpressionOp);
#else // @header-generator platform
    MCAPI ::MolangCompileResult link();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExpressionNode(::Json::Value const&, ::MolangParseConfig const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ExpressionNode& operator=(::MaterialVariants const& materialVariants);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<MolangScriptArg> _getValueIfConstant() const;
#else // @header-generator platform
    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ExpressionNode& operator=(float value);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float evalAsFloat(::RenderParams&) const;
#else // @header-generator platform
    MCAPI bool parse(::std::string_view expression, ::MolangParseConfig const& config);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg const& evalGeneric(::RenderParams&) const;

    MCNAPI std::string getExpressionString() const;

    MCNAPI ::MolangVersion const getMolangVersion() const;

    MCNAPI ::ExpressionOp getOp() const;

    MCNAPI bool hasVariableAssignments() const;

    MCNAPI bool isConstantValue() const;

    MCNAPI bool isInitialized() const;

    MCNAPI bool isValid() const;

    MCNAPI ::MolangCompileResult link();

    MCNAPI bool needsToCompile() const;

    MCNAPI ::ExpressionNode& operator=(float);

    MCNAPI ::ExpressionNode& operator=(::MaterialVariants const&);

    MCNAPI ::ExpressionNode& operator=(::ExpressionNode const&);

    MCNAPI bool parse(std::string_view, ::MolangParseConfig const&);

    MCNAPI bool parse(std::string_view, ::MolangVersion const, ::gsl::span<const HashedString>);

    MCNAPI void replaceArrayVariables(std::unordered_map<HashedString, ExpressionNode>&, bool);

    MCNAPI ::brstd::flat_set<HashedString, std::less<HashedString>, std::vector<HashedString>>
    replaceResourceVariables(std::unordered_map<HashedString, ExpressionNode::ResourceReference>&);

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~ExpressionNode();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool parse(::std::string_view expression, ::MolangVersion version, ::gsl::span<::HashedString const> idSet);

    MCAPI void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::ExpressionNode>& dataMap, bool compileProgram);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _initializeMolangQueries(::ExpressionQueries&&);
#else // @header-generator platform
    MCAPI static bool _initializeMolangQueries(::ExpressionQueries&& queries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void assertMolangInitialized();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::function<
        ::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        ::HashedString const&            functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Experiments& getExperiments();

    MCNAPI static void initializeMolang(::ExpressionQueries&&);

    MCNAPI static std::function<const MolangScriptArg&(RenderParams&, const std::vector<ExpressionNode>&)> const*
    queryFunctionAccessorFromString(::HashedString const&, ::MolangVersion, ::MolangQueryFunctionReturnType&, bool);

    MCNAPI static ::MolangQueryFunction& registerQueryFunction(
        std::string_view,
        std::function<const MolangScriptArg&(RenderParams&, const std::vector<ExpressionNode>&)>,
        std::string_view,
        ::MolangQueryFunctionReturnType,
        ::HashedString,
        ulong,
        ulong,
        std::initializer_list<int> const&
#else // @header-generator platform
    MCAPI static ::MolangQueryFunction& registerQueryFunction(
        ::std::string_view queryFunctionName,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor,
        ::std::string_view                  documentation,
        ::MolangQueryFunctionReturnType     returnType,
        ::HashedString                      querySetIdentifier,
        uint64                              minArgumentCount,
        uint64                              maxArgumentCount,
        ::std::initializer_list<int> const& experiments
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setExperiments(::Experiments const&);
#else // @header-generator platform
    MCAPI static void setExperiments(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setParticleTintFunc(std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>);

    MCNAPI static std::string& toLowerInPlaceExceptStrings(std::string&);

    MCNAPI static void unregisterQueryFunction(std::string const&, ::HashedString);
#else // @header-generator platform
    MCAPI static void
    unregisterQueryFunction(::std::string const& queryFunctionName, ::HashedString querySetIdentifier);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::function<const MolangScriptArg&(RenderParams&, const std::vector<ExpressionNode>&)>&
#else // @header-generator platform
    MCAPI static ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>&
#endif // @header-generator platform
    _defaultUnknownQueryFunction();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>& mGetParticleTintFunc();
#else // @header-generator platform
    MCAPI static ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>&
    mGetParticleTintFunc();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_multimap<HashedString, MolangQueryFunction>& mQueryFunctionAccessors();
#else // @header-generator platform
    MCAPI static ::std::unordered_multimap<::HashedString, ::MolangQueryFunction>& mQueryFunctionAccessors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<HashedString, std::unordered_set<HashedString>>& mQuerySets();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::HashedString, ::std::unordered_set<::HashedString>>& mQuerySets();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MaterialVariants const& materialVariants);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float);
#else // @header-generator platform
    MCAPI void* $ctor(::Molang::details::SourceTree root);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MaterialVariants const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& expression, ::MolangVersion molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Molang::details::SourceTree);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(char const* expression, ::MolangVersion molangVersion);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ExpressionNode const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ExpressionNode&&);

    MCNAPI void* $ctor(char const*, ::MolangVersion const);

    MCNAPI void* $ctor(std::string const&, ::MolangVersion const);

    MCNAPI void* $ctor(::MolangScriptArg const&, ::ExpressionOp);

    MCNAPI void* $ctor(::Json::Value const&, ::MolangParseConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::MolangScriptArg const& value, ::ExpressionOp op);
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// free functions
// NOLINTBEGIN
MCAPI bool operator==(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);
// NOLINTEND
#endif // @header-generator platform
