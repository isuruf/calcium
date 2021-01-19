/*
    Copyright (C) 2021 Fredrik Johansson

    This file is part of Calcium.

    Calcium is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "fexpr.h"
#include "fexpr_builtin.h"

const fexpr_symbol_info fexpr_builtin_table[FEXPR_BUILTIN_LENGTH] = {
    { FEXPR_AGM, "AGM" },
    { FEXPR_Abs, "Abs" },
    { FEXPR_Acos, "Acos" },
    { FEXPR_Acosh, "Acosh" },
    { FEXPR_Acot, "Acot" },
    { FEXPR_Acoth, "Acoth" },
    { FEXPR_Acsc, "Acsc" },
    { FEXPR_Acsch, "Acsch" },
    { FEXPR_Add, "Add" },
    { FEXPR_AiryAi, "AiryAi" },
    { FEXPR_AiryAiZero, "AiryAiZero" },
    { FEXPR_AiryBi, "AiryBi" },
    { FEXPR_AiryBiZero, "AiryBiZero" },
    { FEXPR_AlgebraicNumbers, "AlgebraicNumbers" },
    { FEXPR_All, "All" },
    { FEXPR_And, "And" },
    { FEXPR_Arg, "Arg" },
    { FEXPR_ArgMax, "ArgMax" },
    { FEXPR_ArgMaxUnique, "ArgMaxUnique" },
    { FEXPR_ArgMin, "ArgMin" },
    { FEXPR_ArgMinUnique, "ArgMinUnique" },
    { FEXPR_Asec, "Asec" },
    { FEXPR_Asech, "Asech" },
    { FEXPR_Asin, "Asin" },
    { FEXPR_Asinh, "Asinh" },
    { FEXPR_Atan, "Atan" },
    { FEXPR_Atan2, "Atan2" },
    { FEXPR_Atanh, "Atanh" },
    { FEXPR_BarnesG, "BarnesG" },
    { FEXPR_BellNumber, "BellNumber" },
    { FEXPR_BernoulliB, "BernoulliB" },
    { FEXPR_BernoulliPolynomial, "BernoulliPolynomial" },
    { FEXPR_BesselI, "BesselI" },
    { FEXPR_BesselJ, "BesselJ" },
    { FEXPR_BesselJZero, "BesselJZero" },
    { FEXPR_BesselK, "BesselK" },
    { FEXPR_BesselY, "BesselY" },
    { FEXPR_BesselYZero, "BesselYZero" },
    { FEXPR_BetaFunction, "BetaFunction" },
    { FEXPR_Binomial, "Binomial" },
    { FEXPR_CC, "CC" },
    { FEXPR_Cardinality, "Cardinality" },
    { FEXPR_CarlsonRC, "CarlsonRC" },
    { FEXPR_CarlsonRD, "CarlsonRD" },
    { FEXPR_CarlsonRF, "CarlsonRF" },
    { FEXPR_CarlsonRG, "CarlsonRG" },
    { FEXPR_CarlsonRJ, "CarlsonRJ" },
    { FEXPR_CartesianPower, "CartesianPower" },
    { FEXPR_CartesianProduct, "CartesianProduct" },
    { FEXPR_Case, "Case" },
    { FEXPR_Cases, "Cases" },
    { FEXPR_CatalanConstant, "CatalanConstant" },
    { FEXPR_Ceil, "Ceil" },
    { FEXPR_Characteristic, "Characteristic" },
    { FEXPR_ChebyshevT, "ChebyshevT" },
    { FEXPR_ChebyshevU, "ChebyshevU" },
    { FEXPR_ClosedComplexDisk, "ClosedComplexDisk" },
    { FEXPR_ClosedOpenInterval, "ClosedOpenInterval" },
    { FEXPR_Coefficient, "Coefficient" },
    { FEXPR_CommutativeRings, "CommutativeRings" },
    { FEXPR_ComplexBranchDerivative, "ComplexBranchDerivative" },
    { FEXPR_ComplexDerivative, "ComplexDerivative" },
    { FEXPR_ComplexInfinities, "ComplexInfinities" },
    { FEXPR_ComplexLimit, "ComplexLimit" },
    { FEXPR_ComplexSignedInfinities, "ComplexSignedInfinities" },
    { FEXPR_ComplexSingularityClosure, "ComplexSingularityClosure" },
    { FEXPR_Concatenation, "Concatenation" },
    { FEXPR_CongruentMod, "CongruentMod" },
    { FEXPR_Conjugate, "Conjugate" },
    { FEXPR_ConreyGenerator, "ConreyGenerator" },
    { FEXPR_Cos, "Cos" },
    { FEXPR_Cosh, "Cosh" },
    { FEXPR_Cot, "Cot" },
    { FEXPR_Coth, "Coth" },
    { FEXPR_CoulombC, "CoulombC" },
    { FEXPR_CoulombF, "CoulombF" },
    { FEXPR_CoulombG, "CoulombG" },
    { FEXPR_CoulombH, "CoulombH" },
    { FEXPR_CoulombSigma, "CoulombSigma" },
    { FEXPR_Csc, "Csc" },
    { FEXPR_Csch, "Csch" },
    { FEXPR_Csgn, "Csgn" },
    { FEXPR_Cyclotomic, "Cyclotomic" },
    { FEXPR_Decimal, "Decimal" },
    { FEXPR_DedekindEta, "DedekindEta" },
    { FEXPR_DedekindEtaEpsilon, "DedekindEtaEpsilon" },
    { FEXPR_DedekindSum, "DedekindSum" },
    { FEXPR_Def, "Def" },
    { FEXPR_Derivative, "Derivative" },
    { FEXPR_Det, "Det" },
    { FEXPR_DigammaFunction, "DigammaFunction" },
    { FEXPR_DigammaFunctionZero, "DigammaFunctionZero" },
    { FEXPR_DirichletCharacter, "DirichletCharacter" },
    { FEXPR_DirichletGroup, "DirichletGroup" },
    { FEXPR_DirichletL, "DirichletL" },
    { FEXPR_DirichletLZero, "DirichletLZero" },
    { FEXPR_DirichletLambda, "DirichletLambda" },
    { FEXPR_DiscreteLog, "DiscreteLog" },
    { FEXPR_Div, "Div" },
    { FEXPR_Divides, "Divides" },
    { FEXPR_DivisorProduct, "DivisorProduct" },
    { FEXPR_DivisorSigma, "DivisorSigma" },
    { FEXPR_DivisorSum, "DivisorSum" },
    { FEXPR_DoubleFactorial, "DoubleFactorial" },
    { FEXPR_EisensteinE, "EisensteinE" },
    { FEXPR_EisensteinG, "EisensteinG" },
    { FEXPR_Element, "Element" },
    { FEXPR_EllipticE, "EllipticE" },
    { FEXPR_EllipticK, "EllipticK" },
    { FEXPR_EllipticPi, "EllipticPi" },
    { FEXPR_Equal, "Equal" },
    { FEXPR_Equivalent, "Equivalent" },
    { FEXPR_Erf, "Erf" },
    { FEXPR_Erfc, "Erfc" },
    { FEXPR_Erfi, "Erfi" },
    { FEXPR_Euler, "Euler" },
    { FEXPR_EulerE, "EulerE" },
    { FEXPR_EulerPhi, "EulerPhi" },
    { FEXPR_EulerPolynomial, "EulerPolynomial" },
    { FEXPR_EulerQSeries, "EulerQSeries" },
    { FEXPR_Exists, "Exists" },
    { FEXPR_Exp, "Exp" },
    { FEXPR_ExtendedRealNumbers, "ExtendedRealNumbers" },
    { FEXPR_Factorial, "Factorial" },
    { FEXPR_FallingFactorial, "FallingFactorial" },
    { FEXPR_False, "False" },
    { FEXPR_Fibonacci, "Fibonacci" },
    { FEXPR_Fields, "Fields" },
    { FEXPR_FiniteField, "FiniteField" },
    { FEXPR_Floor, "Floor" },
    { FEXPR_For, "For" },
    { FEXPR_FormalLaurentSeries, "FormalLaurentSeries" },
    { FEXPR_FormalPowerSeries, "FormalPowerSeries" },
    { FEXPR_FormalPuiseuxSeries, "FormalPuiseuxSeries" },
    { FEXPR_Fun, "Fun" },
    { FEXPR_GCD, "GCD" },
    { FEXPR_Gamma, "Gamma" },
    { FEXPR_GaussLegendreWeight, "GaussLegendreWeight" },
    { FEXPR_GaussSum, "GaussSum" },
    { FEXPR_GegenbauerC, "GegenbauerC" },
    { FEXPR_GeneralLinearGroup, "GeneralLinearGroup" },
    { FEXPR_GeneralizedBernoulliB, "GeneralizedBernoulliB" },
    { FEXPR_GeneralizedRiemannHypothesis, "GeneralizedRiemannHypothesis" },
    { FEXPR_GoldenRatio, "GoldenRatio" },
    { FEXPR_Greater, "Greater" },
    { FEXPR_GreaterEqual, "GreaterEqual" },
    { FEXPR_HankelH1, "HankelH1" },
    { FEXPR_HankelH2, "HankelH2" },
    { FEXPR_HarmonicNumber, "HarmonicNumber" },
    { FEXPR_HermiteH, "HermiteH" },
    { FEXPR_HilbertClassPolynomial, "HilbertClassPolynomial" },
    { FEXPR_HilbertMatrix, "HilbertMatrix" },
    { FEXPR_HurwitzZeta, "HurwitzZeta" },
    { FEXPR_Hypergeometric0F1, "Hypergeometric0F1" },
    { FEXPR_Hypergeometric0F1Regularized, "Hypergeometric0F1Regularized" },
    { FEXPR_Hypergeometric1F1, "Hypergeometric1F1" },
    { FEXPR_Hypergeometric1F1Regularized, "Hypergeometric1F1Regularized" },
    { FEXPR_Hypergeometric2F0, "Hypergeometric2F0" },
    { FEXPR_Hypergeometric2F1, "Hypergeometric2F1" },
    { FEXPR_Hypergeometric2F1Regularized, "Hypergeometric2F1Regularized" },
    { FEXPR_Hypergeometric3F2, "Hypergeometric3F2" },
    { FEXPR_Hypergeometric3F2Regularized, "Hypergeometric3F2Regularized" },
    { FEXPR_HypergeometricU, "HypergeometricU" },
    { FEXPR_HypergeometricUStar, "HypergeometricUStar" },
    { FEXPR_IdentityMatrix, "IdentityMatrix" },
    { FEXPR_Im, "Im" },
    { FEXPR_Implies, "Implies" },
    { FEXPR_IncompleteBeta, "IncompleteBeta" },
    { FEXPR_IncompleteBetaRegularized, "IncompleteBetaRegularized" },
    { FEXPR_IncompleteEllipticE, "IncompleteEllipticE" },
    { FEXPR_IncompleteEllipticF, "IncompleteEllipticF" },
    { FEXPR_IncompleteEllipticPi, "IncompleteEllipticPi" },
    { FEXPR_Infimum, "Infimum" },
    { FEXPR_Infinity, "Infinity" },
    { FEXPR_IntegersGreaterEqual, "IntegersGreaterEqual" },
    { FEXPR_IntegersLessEqual, "IntegersLessEqual" },
    { FEXPR_Integral, "Integral" },
    { FEXPR_Intersection, "Intersection" },
    { FEXPR_Interval, "Interval" },
    { FEXPR_IsEven, "IsEven" },
    { FEXPR_IsOdd, "IsOdd" },
    { FEXPR_IsPrime, "IsPrime" },
    { FEXPR_Item, "Item" },
    { FEXPR_JacobiP, "JacobiP" },
    { FEXPR_JacobiSymbol, "JacobiSymbol" },
    { FEXPR_JacobiTheta, "JacobiTheta" },
    { FEXPR_JacobiThetaEpsilon, "JacobiThetaEpsilon" },
    { FEXPR_JacobiThetaPermutation, "JacobiThetaPermutation" },
    { FEXPR_KeiperLiLambda, "KeiperLiLambda" },
    { FEXPR_KroneckerDelta, "KroneckerDelta" },
    { FEXPR_KroneckerSymbol, "KroneckerSymbol" },
    { FEXPR_LCM, "LCM" },
    { FEXPR_LaguerreL, "LaguerreL" },
    { FEXPR_LambertW, "LambertW" },
    { FEXPR_LandauG, "LandauG" },
    { FEXPR_LeftLimit, "LeftLimit" },
    { FEXPR_LegendreP, "LegendreP" },
    { FEXPR_LegendrePolynomialZero, "LegendrePolynomialZero" },
    { FEXPR_LegendreSymbol, "LegendreSymbol" },
    { FEXPR_Length, "Length" },
    { FEXPR_LerchPhi, "LerchPhi" },
    { FEXPR_Less, "Less" },
    { FEXPR_LessEqual, "LessEqual" },
    { FEXPR_Limit, "Limit" },
    { FEXPR_LiouvilleLambda, "LiouvilleLambda" },
    { FEXPR_List, "List" },
    { FEXPR_Log, "Log" },
    { FEXPR_LogBarnesG, "LogBarnesG" },
    { FEXPR_LogGamma, "LogGamma" },
    { FEXPR_LogIntegral, "LogIntegral" },
    { FEXPR_LowerGamma, "LowerGamma" },
    { FEXPR_Matrices, "Matrices" },
    { FEXPR_Matrix, "Matrix" },
    { FEXPR_Matrix2x1, "Matrix2x1" },
    { FEXPR_Matrix2x2, "Matrix2x2" },
    { FEXPR_Max, "Max" },
    { FEXPR_Maximum, "Maximum" },
    { FEXPR_MeromorphicDerivative, "MeromorphicDerivative" },
    { FEXPR_MeromorphicLimit, "MeromorphicLimit" },
    { FEXPR_Min, "Min" },
    { FEXPR_Minimum, "Minimum" },
    { FEXPR_ModularGroupAction, "ModularGroupAction" },
    { FEXPR_ModularGroupFundamentalDomain, "ModularGroupFundamentalDomain" },
    { FEXPR_ModularJ, "ModularJ" },
    { FEXPR_ModularLambda, "ModularLambda" },
    { FEXPR_ModularLambdaFundamentalDomain, "ModularLambdaFundamentalDomain" },
    { FEXPR_MoebiusMu, "MoebiusMu" },
    { FEXPR_Mul, "Mul" },
    { FEXPR_MultiZetaValue, "MultiZetaValue" },
    { FEXPR_NN, "NN" },
    { FEXPR_Neg, "Neg" },
    { FEXPR_Not, "Not" },
    { FEXPR_NotElement, "NotElement" },
    { FEXPR_NotEqual, "NotEqual" },
    { FEXPR_NumberE, "NumberE" },
    { FEXPR_NumberI, "NumberI" },
    { FEXPR_One, "One" },
    { FEXPR_OpenClosedInterval, "OpenClosedInterval" },
    { FEXPR_OpenComplexDisk, "OpenComplexDisk" },
    { FEXPR_OpenInterval, "OpenInterval" },
    { FEXPR_OpenRealBall, "OpenRealBall" },
    { FEXPR_Or, "Or" },
    { FEXPR_Otherwise, "Otherwise" },
    { FEXPR_PartitionsP, "PartitionsP" },
    { FEXPR_Pi, "Pi" },
    { FEXPR_Pol, "Pol" },
    { FEXPR_PolyLog, "PolyLog" },
    { FEXPR_PolynomialDegree, "PolynomialDegree" },
    { FEXPR_PolynomialFractions, "PolynomialFractions" },
    { FEXPR_Polynomials, "Polynomials" },
    { FEXPR_Pos, "Pos" },
    { FEXPR_Pow, "Pow" },
    { FEXPR_Prime, "Prime" },
    { FEXPR_PrimePi, "PrimePi" },
    { FEXPR_PrimeProduct, "PrimeProduct" },
    { FEXPR_PrimeSum, "PrimeSum" },
    { FEXPR_Primes, "Primes" },
    { FEXPR_PrimitiveDirichletCharacters, "PrimitiveDirichletCharacters" },
    { FEXPR_PrimitiveReducedPositiveIntegralBinaryQuadraticForms, "PrimitiveReducedPositiveIntegralBinaryQuadraticForms" },
    { FEXPR_Product, "Product" },
    { FEXPR_ProjectiveComplexNumbers, "ProjectiveComplexNumbers" },
    { FEXPR_ProjectiveRealNumbers, "ProjectiveRealNumbers" },
    { FEXPR_QQ, "QQ" },
    { FEXPR_QuotientRing, "QuotientRing" },
    { FEXPR_RR, "RR" },
    { FEXPR_Range, "Range" },
    { FEXPR_Re, "Re" },
    { FEXPR_RealAbs, "RealAbs" },
    { FEXPR_RealAlgebraicNumbers, "RealAlgebraicNumbers" },
    { FEXPR_RealBall, "RealBall" },
    { FEXPR_RealDerivative, "RealDerivative" },
    { FEXPR_RealInfinities, "RealInfinities" },
    { FEXPR_RealLimit, "RealLimit" },
    { FEXPR_RealSignedInfinities, "RealSignedInfinities" },
    { FEXPR_RealSingularityClosure, "RealSingularityClosure" },
    { FEXPR_RiemannHypothesis, "RiemannHypothesis" },
    { FEXPR_RiemannXi, "RiemannXi" },
    { FEXPR_RiemannZeta, "RiemannZeta" },
    { FEXPR_RiemannZetaZero, "RiemannZetaZero" },
    { FEXPR_RightLimit, "RightLimit" },
    { FEXPR_Rings, "Rings" },
    { FEXPR_RisingFactorial, "RisingFactorial" },
    { FEXPR_Root, "Root" },
    { FEXPR_RootOfUnity, "RootOfUnity" },
    { FEXPR_SL2Z, "SL2Z" },
    { FEXPR_Sec, "Sec" },
    { FEXPR_Sech, "Sech" },
    { FEXPR_SequenceLimit, "SequenceLimit" },
    { FEXPR_SequenceLimitInferior, "SequenceLimitInferior" },
    { FEXPR_SequenceLimitSuperior, "SequenceLimitSuperior" },
    { FEXPR_Ser, "Ser" },
    { FEXPR_Set, "Set" },
    { FEXPR_SetMinus, "SetMinus" },
    { FEXPR_Sets, "Sets" },
    { FEXPR_Sign, "Sign" },
    { FEXPR_SignExtendedComplexNumbers, "SignExtendedComplexNumbers" },
    { FEXPR_Sin, "Sin" },
    { FEXPR_SinIntegral, "SinIntegral" },
    { FEXPR_Sinc, "Sinc" },
    { FEXPR_SingularValues, "SingularValues" },
    { FEXPR_Sinh, "Sinh" },
    { FEXPR_Solutions, "Solutions" },
    { FEXPR_SpecialLinearGroup, "SpecialLinearGroup" },
    { FEXPR_Spectrum, "Spectrum" },
    { FEXPR_SphericalHarmonicY, "SphericalHarmonicY" },
    { FEXPR_Sqrt, "Sqrt" },
    { FEXPR_SquaresR, "SquaresR" },
    { FEXPR_StieltjesGamma, "StieltjesGamma" },
    { FEXPR_StirlingS1, "StirlingS1" },
    { FEXPR_StirlingS2, "StirlingS2" },
    { FEXPR_Sub, "Sub" },
    { FEXPR_Subset, "Subset" },
    { FEXPR_SubsetEqual, "SubsetEqual" },
    { FEXPR_Subsets, "Subsets" },
    { FEXPR_Sum, "Sum" },
    { FEXPR_Supremum, "Supremum" },
    { FEXPR_SymmetricPolynomial, "SymmetricPolynomial" },
    { FEXPR_Tan, "Tan" },
    { FEXPR_Tanh, "Tanh" },
    { FEXPR_True, "True" },
    { FEXPR_Tuple, "Tuple" },
    { FEXPR_Tuples, "Tuples" },
    { FEXPR_Undefined, "Undefined" },
    { FEXPR_Union, "Union" },
    { FEXPR_UniqueSolution, "UniqueSolution" },
    { FEXPR_UniqueZero, "UniqueZero" },
    { FEXPR_UnsignedInfinity, "UnsignedInfinity" },
    { FEXPR_UpperGamma, "UpperGamma" },
    { FEXPR_UpperHalfPlane, "UpperHalfPlane" },
    { FEXPR_WeierstrassP, "WeierstrassP" },
    { FEXPR_WeierstrassSigma, "WeierstrassSigma" },
    { FEXPR_WeierstrassZeta, "WeierstrassZeta" },
    { FEXPR_Where, "Where" },
    { FEXPR_XGCD, "XGCD" },
    { FEXPR_ZZ, "ZZ" },
    { FEXPR_Zero, "Zero" },
    { FEXPR_Zeros, "Zeros" },
};