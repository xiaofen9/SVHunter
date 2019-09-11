// Generated from /Users/f3i/IdeaProjects/antlr/Dhl.g4 by ANTLR 4.7
package SVParser;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link DhlParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface DhlVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by the {@code newNode}
	 * labeled alternative in {@link DhlParser#prog}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNewNode(DhlParser.NewNodeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code singleObsr}
	 * labeled alternative in {@link DhlParser#stat}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSingleObsr(DhlParser.SingleObsrContext ctx);
	/**
	 * Visit a parse tree produced by the {@code blank}
	 * labeled alternative in {@link DhlParser#stat}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlank(DhlParser.BlankContext ctx);
	/**
	 * Visit a parse tree produced by the {@code orEffect}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOrEffect(DhlParser.OrEffectContext ctx);
	/**
	 * Visit a parse tree produced by the {@code parens}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParens(DhlParser.ParensContext ctx);
	/**
	 * Visit a parse tree produced by the {@code andEffect}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAndEffect(DhlParser.AndEffectContext ctx);
	/**
	 * Visit a parse tree produced by the {@code singleEffect}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSingleEffect(DhlParser.SingleEffectContext ctx);
	/**
	 * Visit a parse tree produced by the {@code localCause}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLocalCause(DhlParser.LocalCauseContext ctx);
	/**
	 * Visit a parse tree produced by the {@code attackStage}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAttackStage(DhlParser.AttackStageContext ctx);
	/**
	 * Visit a parse tree produced by the {@code desc}
	 * labeled alternative in {@link DhlParser#obsr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDesc(DhlParser.DescContext ctx);
	/**
	 * Visit a parse tree produced by the {@code readVar}
	 * labeled alternative in {@link DhlParser#primitive}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReadVar(DhlParser.ReadVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code writeVar}
	 * labeled alternative in {@link DhlParser#primitive}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWriteVar(DhlParser.WriteVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code crashVar}
	 * labeled alternative in {@link DhlParser#primitive}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCrashVar(DhlParser.CrashVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code finalStage}
	 * labeled alternative in {@link DhlParser#stage}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFinalStage(DhlParser.FinalStageContext ctx);
	/**
	 * Visit a parse tree produced by the {@code toeStage}
	 * labeled alternative in {@link DhlParser#stage}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitToeStage(DhlParser.ToeStageContext ctx);
	/**
	 * Visit a parse tree produced by the {@code harvestStage}
	 * labeled alternative in {@link DhlParser#stage}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitHarvestStage(DhlParser.HarvestStageContext ctx);
	/**
	 * Visit a parse tree produced by the {@code singleVar}
	 * labeled alternative in {@link DhlParser#var}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSingleVar(DhlParser.SingleVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code normalPath}
	 * labeled alternative in {@link DhlParser#domain}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNormalPath(DhlParser.NormalPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code fuzzMatch}
	 * labeled alternative in {@link DhlParser#domain}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFuzzMatch(DhlParser.FuzzMatchContext ctx);
	/**
	 * Visit a parse tree produced by the {@code fileSystemPath}
	 * labeled alternative in {@link DhlParser#pid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFileSystemPath(DhlParser.FileSystemPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code webPath}
	 * labeled alternative in {@link DhlParser#pid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWebPath(DhlParser.WebPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dbPath}
	 * labeled alternative in {@link DhlParser#pid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDbPath(DhlParser.DbPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code dpPath}
	 * labeled alternative in {@link DhlParser#pid}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDpPath(DhlParser.DpPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code multiPath}
	 * labeled alternative in {@link DhlParser#dic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiPath(DhlParser.MultiPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code notPath}
	 * labeled alternative in {@link DhlParser#dic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNotPath(DhlParser.NotPathContext ctx);
	/**
	 * Visit a parse tree produced by the {@code rootDic}
	 * labeled alternative in {@link DhlParser#dic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRootDic(DhlParser.RootDicContext ctx);
	/**
	 * Visit a parse tree produced by the {@code singlePath}
	 * labeled alternative in {@link DhlParser#dic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSinglePath(DhlParser.SinglePathContext ctx);
}