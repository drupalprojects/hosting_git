<?php

// autoload_static.php @generated by Composer

namespace Composer\Autoload;

class ComposerStaticInit54eb48c552552b20c2892cebfceb4121
{
    public static $prefixLengthsPsr4 = array (
        'S' => 
        array (
            'Symfony\\Component\\Process\\' => 26,
            'Symfony\\Component\\EventDispatcher\\' => 34,
        ),
    );

    public static $prefixDirsPsr4 = array (
        'Symfony\\Component\\Process\\' => 
        array (
            0 => __DIR__ . '/..' . '/symfony/process',
        ),
        'Symfony\\Component\\EventDispatcher\\' => 
        array (
            0 => __DIR__ . '/..' . '/symfony/event-dispatcher',
        ),
    );

    public static $prefixesPsr0 = array (
        'G' => 
        array (
            'GitWrapper' => 
            array (
                0 => __DIR__ . '/..' . '/cpliakas/git-wrapper/src',
            ),
        ),
    );

    public static function getInitializer(ClassLoader $loader)
    {
        return \Closure::bind(function () use ($loader) {
            $loader->prefixLengthsPsr4 = ComposerStaticInit54eb48c552552b20c2892cebfceb4121::$prefixLengthsPsr4;
            $loader->prefixDirsPsr4 = ComposerStaticInit54eb48c552552b20c2892cebfceb4121::$prefixDirsPsr4;
            $loader->prefixesPsr0 = ComposerStaticInit54eb48c552552b20c2892cebfceb4121::$prefixesPsr0;

        }, null, ClassLoader::class);
    }
}