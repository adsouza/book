(jbuild_version 1)

(alias ((name sexp) (deps (build_shapes.sh.sexp))))

(rule (
  (targets (build_shapes.sh.sexp))
  (deps    (build_shapes.sh))
  (action (
    progn
    (bash "touch jbuild.inc")
    (with-stdout-to ${@} (run rwo-build eval ${<}))))))

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (shapes.ml.sexp))))

(rule (
  (targets (shapes.ml.sexp))
  (deps    (shapes.ml))
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))
