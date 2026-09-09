#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/MolangScriptArg.h"
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
class SemVersion;
struct ExpressionQueries;
struct MolangClientTextureSet;
struct MolangDataDrivenGeometry;
struct MolangParseConfig;
struct MolangQueryFunction;
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 88, ::MolangScriptArg> mNewValue;
        ::ll::TypedStorage<2, 2, ::ExpressionOp>     mNewOpType;
        ::ll::TypedStorage<1, 1, bool>               mIsUsed;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit ResourceReference(::MolangDataDrivenGeometry const&);

        MCNAPI explicit ResourceReference(::MolangClientTextureSet const&);

        MCNAPI explicit ResourceReference(::MaterialVariants const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::MolangDataDrivenGeometry const&);

        MCNAPI void* $ctor(::MolangClientTextureSet const&);

        MCNAPI void* $ctor(::MaterialVariants const&);
        // NOLINTEND
    };

    using GetParticleTintFunc = std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>;

    using MissingResourceSet = ::brstd::flat_set<HashedString, std::less<HashedString>, std::vector<HashedString>>;

    using ResourceTable = std::unordered_map<HashedString, ExpressionNode::ResourceReference>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::variant<std::unique_ptr<Molang::details::IComplexExpression>, float>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpressionNode();

    MCNAPI explicit ExpressionNode(float);

    MCNAPI explicit ExpressionNode(::MaterialVariants const&);

    MCNAPI explicit ExpressionNode(::Molang::details::SourceTree);

    MCNAPI ExpressionNode(::ExpressionNode const&);

    MCNAPI ExpressionNode(::ExpressionNode&&);

    MCNAPI ExpressionNode(char const*, ::MolangVersion const);

    MCNAPI ExpressionNode(std::string const&, ::MolangVersion const);

    MCNAPI ExpressionNode(::MolangScriptArg const&, ::ExpressionOp);

    MCNAPI ExpressionNode(::Json::Value const&, ::MolangParseConfig const&);

    MCNAPI std::optional<MolangScriptArg> _getValueIfConstant() const;

    MCNAPI void clear();

    MCNAPI float evalAsFloat(::RenderParams&) const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _initializeMolangQueries(::ExpressionQueries&&);

    MCNAPI static void assertMolangInitialized();

    MCNAPI static void bindType(::cereal::ReflectionCtx&);

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
    );

    MCNAPI static void setExperiments(::Experiments const&);

    MCNAPI static void setParticleTintFunc(std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>);

    MCNAPI static std::string& toLowerInPlaceExceptStrings(std::string&);

    MCNAPI static void unregisterQueryFunction(std::string const&, ::HashedString);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::function<const MolangScriptArg&(RenderParams&, const std::vector<ExpressionNode>&)>&
    _defaultUnknownQueryFunction();

    MCNAPI static std::function<mce::Color(const Block&, BlockSource&, const BlockPos&)>& mGetParticleTintFunc();

    MCNAPI static std::unordered_multimap<HashedString, MolangQueryFunction>& mQueryFunctionAccessors();

    MCNAPI static std::unordered_map<HashedString, std::unordered_set<HashedString>>& mQuerySets();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(float);

    MCNAPI void* $ctor(::MaterialVariants const&);

    MCNAPI void* $ctor(::Molang::details::SourceTree);

    MCNAPI void* $ctor(::ExpressionNode const&);

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
    // NOLINTEND
};
