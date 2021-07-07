
(cl:in-package :asdf)

(defsystem "lidar_localization-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "optimizeMap" :depends-on ("_package_optimizeMap"))
    (:file "_package_optimizeMap" :depends-on ("_package"))
    (:file "saveMap" :depends-on ("_package_saveMap"))
    (:file "_package_saveMap" :depends-on ("_package"))
  ))